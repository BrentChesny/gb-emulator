# GameBoy Emulator

GameBoy Emulator written in C. Work in progress.

- [x] CPU
  - [x] Instructions
  - [x] Interrupts
- [ ] Graphics
  - [x] Backgrounds
  - [ ] Sprites
- [x] Input
- [ ] Memory Banking
- [ ] Sounds

### Compiling and running

You can compile and run the emulator by running the following commands from the project root:
```
$ make
$ ./bin/main
```

The emulator currently loads up the Tetris rom automatically and there is no way to specify another rom via a commandline argument. This will be added in a future update.
