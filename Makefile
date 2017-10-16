# Determine the platform
UNAME_S := $(shell uname -s)

# CC
ifeq ($(UNAME_S),Darwin)
	CC := clang -arch x86_64
else
	CC := gcc
endif

# Folders
SRCDIR := src
BUILDDIR := build
TARGETDIR := bin
RESOURCEDIR := resources

# Targets
EXECUTABLE := main
TARGET := $(TARGETDIR)/$(EXECUTABLE)

# Final Paths
INSTALLBINDIR := /usr/local/bin

# Code Lists
SRCEXT := c
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))

# Folder Lists
# Note: Intentionally excludes the root of the include folder so the lists are clean
INCDIRS := $(shell find include/**/* -name '*.h' -exec dirname {} > /dev/null 2>&1 \; | sort | uniq)
INCLIST := $(patsubst include/%,-I include/%,$(INCDIRS))
BUILDLIST := $(patsubst include/%,$(BUILDDIR)/%,$(INCDIRS))
BUILDLIST += $(BUILDDIR)

# Shared Compiler Flags
CFLAGS := -O2 -Wall -pedantic -Werror
LFLAGS := `sdl-config --libs`
INC := -I include $(INCLIST)
LIB := -pthread

$(TARGET): $(OBJECTS)
	@mkdir -p $(TARGETDIR)
	@echo "Linking..."
	@echo "    Linking $(TARGET)"; $(CC) $^ -o $(TARGET) $(LFLAGS)
	@echo "Copying resources..."; cp -R $(RESOURCEDIR) $(TARGETDIR)
	@echo "Cleaning build folder..."; $(RM) -r $(BUILDDIR)


$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDLIST)
	@echo "Compiling $<..."; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo "Cleaning $(TARGET)..."; $(RM) -r $(BUILDDIR) $(TARGETDIR)

install:
	@echo "Installing $(EXECUTABLE)..."; cp $(TARGET) $(INSTALLBINDIR)

distclean:
	@echo "Removing $(EXECUTABLE)"; rm $(INSTALLBINDIR)/$(EXECUTABLE)

.PHONY: clean
