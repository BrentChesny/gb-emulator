#include "ops.h"
#include "defs.h"
#include "error.h"

void LDrr_bb(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gameboy->cpu->b;
  gameboy->cpu->m = 1;
}

void LDrr_bc(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gameboy->cpu->c;
  gameboy->cpu->m = 1;
}

void LDrr_bd(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gameboy->cpu->d;
  gameboy->cpu->m = 1;
}

void LDrr_be(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gameboy->cpu->e;
  gameboy->cpu->m = 1;
}

void LDrr_bh(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gameboy->cpu->h;
  gameboy->cpu->m = 1;
}

void LDrr_bl(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void LDrr_ba(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gameboy->cpu->a;
  gameboy->cpu->m = 1;
}

void LDrr_cb(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gameboy->cpu->b;
  gameboy->cpu->m = 1;
}

void LDrr_cc(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gameboy->cpu->c;
  gameboy->cpu->m = 1;
}

void LDrr_cd(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gameboy->cpu->d;
  gameboy->cpu->m = 1;
}

void LDrr_ce(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gameboy->cpu->e;
  gameboy->cpu->m = 1;
}

void LDrr_ch(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gameboy->cpu->h;
  gameboy->cpu->m = 1;
}

void LDrr_cl(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void LDrr_ca(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gameboy->cpu->a;
  gameboy->cpu->m = 1;
}

void LDrr_db(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gameboy->cpu->b;
  gameboy->cpu->m = 1;
}

void LDrr_dc(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gameboy->cpu->c;
  gameboy->cpu->m = 1;
}

void LDrr_dd(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gameboy->cpu->d;
  gameboy->cpu->m = 1;
}

void LDrr_de(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gameboy->cpu->e;
  gameboy->cpu->m = 1;
}

void LDrr_dh(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gameboy->cpu->h;
  gameboy->cpu->m = 1;
}

void LDrr_dl(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void LDrr_da(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gameboy->cpu->a;
  gameboy->cpu->m = 1;
}

void LDrr_eb(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gameboy->cpu->b;
  gameboy->cpu->m = 1;
}

void LDrr_ec(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gameboy->cpu->c;
  gameboy->cpu->m = 1;
}

void LDrr_ed(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gameboy->cpu->d;
  gameboy->cpu->m = 1;
}

void LDrr_ee(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gameboy->cpu->e;
  gameboy->cpu->m = 1;
}

void LDrr_eh(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gameboy->cpu->h;
  gameboy->cpu->m = 1;
}

void LDrr_el(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void LDrr_ea(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gameboy->cpu->a;
  gameboy->cpu->m = 1;
}

void LDrr_hb(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gameboy->cpu->b;
  gameboy->cpu->m = 1;
}

void LDrr_hc(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gameboy->cpu->c;
  gameboy->cpu->m = 1;
}

void LDrr_hd(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gameboy->cpu->d;
  gameboy->cpu->m = 1;
}

void LDrr_he(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gameboy->cpu->e;
  gameboy->cpu->m = 1;
}

void LDrr_hh(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gameboy->cpu->h;
  gameboy->cpu->m = 1;
}

void LDrr_hl(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void LDrr_ha(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gameboy->cpu->a;
  gameboy->cpu->m = 1;
}

void LDrr_lb(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gameboy->cpu->b;
  gameboy->cpu->m = 1;
}

void LDrr_lc(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gameboy->cpu->c;
  gameboy->cpu->m = 1;
}

void LDrr_ld(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gameboy->cpu->d;
  gameboy->cpu->m = 1;
}

void LDrr_le(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gameboy->cpu->e;
  gameboy->cpu->m = 1;
}

void LDrr_lh(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gameboy->cpu->h;
  gameboy->cpu->m = 1;
}

void LDrr_ll(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void LDrr_la(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gameboy->cpu->a;
  gameboy->cpu->m = 1;
}

void LDrr_ab(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gameboy->cpu->b;
  gameboy->cpu->m = 1;
}

void LDrr_ac(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gameboy->cpu->c;
  gameboy->cpu->m = 1;
}

void LDrr_ad(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gameboy->cpu->d;
  gameboy->cpu->m = 1;
}

void LDrr_ae(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gameboy->cpu->e;
  gameboy->cpu->m = 1;
}

void LDrr_ah(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gameboy->cpu->h;
  gameboy->cpu->m = 1;
}

void LDrr_al(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void LDrr_aa(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gameboy->cpu->a;
  gameboy->cpu->m = 1;
}

void LDrHLm_b(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->b = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDrHLm_c(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->c = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDrHLm_d(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->d = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDrHLm_e(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->e = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDrHLm_h(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->h = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDrHLm_l(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->l = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDrHLm_a(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->a = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDHLmr_b(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->b);
  gameboy->cpu->m = 2;
}

void LDHLmr_c(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->c);
  gameboy->cpu->m = 2;
}

void LDHLmr_d(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->d);
  gameboy->cpu->m = 2;
}

void LDHLmr_e(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->e);
  gameboy->cpu->m = 2;
}

void LDHLmr_h(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->h);
  gameboy->cpu->m = 2;
}

void LDHLmr_l(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->l);
  gameboy->cpu->m = 2;
}

void LDHLmr_a(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->a);
  gameboy->cpu->m = 2;
}

void LDrn_b(gb_gameboy* gameboy)
{
  gameboy->cpu->b = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
}

void LDrn_c(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
}

void LDrn_d(gb_gameboy* gameboy)
{
  gameboy->cpu->d = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
}

void LDrn_e(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
}

void LDrn_h(gb_gameboy* gameboy)
{
  gameboy->cpu->h = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
}

void LDrn_l(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
}

void LDrn_a(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
}

void LDHLmn(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gb_mmu_rb(gameboy, gameboy->cpu->pc));
  gameboy->cpu->pc++;
  gameboy->cpu->m = 3;
}

void LDBCmA(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->b << 8) + gameboy->cpu->c;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->a);
  gameboy->cpu->m = 2;
}

void LDDEmA(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->d << 8) + gameboy->cpu->e;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->a);
  gameboy->cpu->m = 2;
}

void LDmmA(gb_gameboy* gameboy)
{
  gb_mmu_wb(gameboy, gb_mmu_rw(gameboy, gameboy->cpu->pc), gameboy->cpu->a);
  gameboy->cpu->pc += 2;
  gameboy->cpu->m = 4;
}

void LDABCm(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->b << 8) + gameboy->cpu->c;
  gameboy->cpu->a = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDADEm(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->d << 8) + gameboy->cpu->e;
  gameboy->cpu->a = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->m = 2;
}

void LDAmm(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gb_mmu_rb(gameboy, gb_mmu_rw(gameboy, gameboy->cpu->pc));
  gameboy->cpu->pc += 2;
  gameboy->cpu->m = 4;
}

void LDBCnn(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->b = gb_mmu_rb(gameboy, gameboy->cpu->pc + 1);
  gameboy->cpu->pc += 2;
  gameboy->cpu->m = 3;
}

void LDDEnn(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->d = gb_mmu_rb(gameboy, gameboy->cpu->pc + 1);
  gameboy->cpu->pc += 2;
  gameboy->cpu->m = 3;
}

void LDHLnn(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->h = gb_mmu_rb(gameboy, gameboy->cpu->pc + 1);
  gameboy->cpu->pc += 2;
  gameboy->cpu->m = 3;
}

void LDSPnn(gb_gameboy* gameboy)
{
  gameboy->cpu->sp = gb_mmu_rw(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc += 2;
  gameboy->cpu->m = 3;
}

void LDHLmm(gb_gameboy* gameboy)
{
  uint16_t i = gb_mmu_rw(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc += 2;
  gameboy->cpu->l = gb_mmu_rb(gameboy, i);
  gameboy->cpu->h = gb_mmu_rb(gameboy, i + 1);
  gameboy->cpu->m = 5;
}

void LDmmHL(gb_gameboy* gameboy)
{
  uint16_t i = gb_mmu_rw(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc += 2;
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_ww(gameboy, i, addr);
  gameboy->cpu->m = 5;
}

void LDmmSP(gb_gameboy* gameboy)
{
  uint16_t i = gb_mmu_rw(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc += 2;
  gb_mmu_ww(gameboy, i, gameboy->cpu->sp);
  gameboy->cpu->m = 5;
}

void LDHLIA(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->a);
  gameboy->cpu->l = (gameboy->cpu->l + 1) & BYTE_MASK;
  if (!gameboy->cpu->l)
  {
    gameboy->cpu->h = (gameboy->cpu->h + 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 2;
}

void LDAHLI(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->a = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->l = (gameboy->cpu->l + 1) & BYTE_MASK;
  if (!gameboy->cpu->l)
  {
    gameboy->cpu->h = (gameboy->cpu->h + 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 2;
}

void LDHLDA(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gb_mmu_wb(gameboy, addr, gameboy->cpu->a);
  gameboy->cpu->l = (gameboy->cpu->l - 1) & BYTE_MASK;
  if (gameboy->cpu->l == BYTE_MASK)
  {
    gameboy->cpu->h = (gameboy->cpu->h - 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 2;
}

void LDAHLD(gb_gameboy* gameboy)
{
  uint16_t addr = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->a = gb_mmu_rb(gameboy, addr);
  gameboy->cpu->l = (gameboy->cpu->l - 1) & BYTE_MASK;
  if (gameboy->cpu->l == BYTE_MASK)
  {
    gameboy->cpu->h = (gameboy->cpu->h - 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 2;
}

void LDAIOn(gb_gameboy* gameboy)
{
  uint8_t val = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->a = gb_mmu_rb(gameboy, EXTEND_TO_WORD(val));
  gameboy->cpu->pc++;
  gameboy->cpu->m = 3;
}

void LDIOnA(gb_gameboy* gameboy)
{
  uint8_t val = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gb_mmu_wb(gameboy, EXTEND_TO_WORD(val), gameboy->cpu->a);
  gameboy->cpu->pc++;
  gameboy->cpu->m = 3;
}

void LDAIOC(gb_gameboy* gameboy)
{
  gameboy->cpu->a = gb_mmu_rb(gameboy, EXTEND_TO_WORD(gameboy->cpu->c));
  gameboy->cpu->m = 2;
}

void LDIOCA(gb_gameboy* gameboy)
{
  gb_mmu_wb(gameboy, EXTEND_TO_WORD(gameboy->cpu->c), gameboy->cpu->a);
  gameboy->cpu->m = 2;
}

void LDHLSPn(gb_gameboy* gameboy)
{
  uint8_t i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i > HALF_BYTE_MASK)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  i += gameboy->cpu->sp;
  gameboy->cpu->h = (i >> 8) & BYTE_MASK;
  gameboy->cpu->l = i & BYTE_MASK;
  gameboy->cpu->m = 3;
}

void SWAPr_b(gb_gameboy* gameboy)
{
  uint8_t tr = gameboy->cpu->b;
  gameboy->cpu->b = ((tr & LO_NIBBLE_MASK) << 4) | ((tr & HI_NIBBLE_MASK) >> 4);
  gameboy->cpu->f = gameboy->cpu->b ? NO_FLAG : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void SWAPr_c(gb_gameboy* gameboy)
{
  uint8_t tr = gameboy->cpu->c;
  gameboy->cpu->c = ((tr & LO_NIBBLE_MASK) << 4) | ((tr & HI_NIBBLE_MASK) >> 4);
  gameboy->cpu->f = gameboy->cpu->c ? NO_FLAG : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void SWAPr_d(gb_gameboy* gameboy)
{
  uint8_t tr = gameboy->cpu->d;
  gameboy->cpu->d = ((tr & LO_NIBBLE_MASK) << 4) | ((tr & HI_NIBBLE_MASK) >> 4);
  gameboy->cpu->f = gameboy->cpu->d ? NO_FLAG : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void SWAPr_e(gb_gameboy* gameboy)
{
  uint8_t tr = gameboy->cpu->e;
  gameboy->cpu->e = ((tr & LO_NIBBLE_MASK) << 4) | ((tr & HI_NIBBLE_MASK) >> 4);
  gameboy->cpu->f = gameboy->cpu->e ? NO_FLAG : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void SWAPr_h(gb_gameboy* gameboy)
{
  uint8_t tr = gameboy->cpu->h;
  gameboy->cpu->h = ((tr & LO_NIBBLE_MASK) << 4) | ((tr & HI_NIBBLE_MASK) >> 4);
  gameboy->cpu->f = gameboy->cpu->h ? NO_FLAG : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void SWAPr_l(gb_gameboy* gameboy)
{
  uint8_t tr = gameboy->cpu->l;
  gameboy->cpu->l = ((tr & LO_NIBBLE_MASK) << 4) | ((tr & HI_NIBBLE_MASK) >> 4);
  gameboy->cpu->f = gameboy->cpu->l ? NO_FLAG : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void SWAPr_a(gb_gameboy* gameboy)
{
  uint8_t tr = gameboy->cpu->a;
  gameboy->cpu->a = ((tr & LO_NIBBLE_MASK) << 4) | ((tr & HI_NIBBLE_MASK) >> 4);
  gameboy->cpu->f = gameboy->cpu->a ? NO_FLAG : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ADDr_b(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->b;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADDr_c(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->c;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->c ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADDr_d(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->d;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->d ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADDr_e(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->e;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->e ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADDr_h(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->h;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->h ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADDr_l(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->l;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->l ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADDr_a(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->a;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->a ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADDHL(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  gameboy->cpu->a += m;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a^a^m) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void ADDn(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->a += m;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a^a^m) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void ADDHLBC(gb_gameboy* gameboy)
{
  uint16_t hl = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  hl += (gameboy->cpu->b << 8) + gameboy->cpu->c;
  if (hl > WORD_MASK)
  {
    gameboy->cpu->f |= CARRY_FLAG;
  }
  else
  {
    gameboy->cpu->f &= BYTE_MASK ^ CARRY_FLAG;
  }
  gameboy->cpu->h = (hl >> 8) & BYTE_MASK;
  gameboy->cpu->l = hl & BYTE_MASK;
  gameboy->cpu->m = 3;
}

void ADDHLDE(gb_gameboy* gameboy)
{
  uint16_t hl = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  hl += (gameboy->cpu->d << 8) + gameboy->cpu->e;
  if (hl > WORD_MASK)
  {
    gameboy->cpu->f |= CARRY_FLAG;
  }
  else
  {
    gameboy->cpu->f &= BYTE_MASK ^ CARRY_FLAG;
  }
  gameboy->cpu->h = (hl >> 8) & BYTE_MASK;
  gameboy->cpu->l = hl & BYTE_MASK;
  gameboy->cpu->m = 3;
}

void ADDHLHL(gb_gameboy* gameboy)
{
  uint16_t hl = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  hl += (gameboy->cpu->h << 8) + gameboy->cpu->l;
  if (hl > WORD_MASK)
  {
    gameboy->cpu->f |= CARRY_FLAG;
  }
  else
  {
    gameboy->cpu->f &= BYTE_MASK ^ CARRY_FLAG;
  }
  gameboy->cpu->h = (hl >> 8) & BYTE_MASK;
  gameboy->cpu->l = hl & BYTE_MASK;
  gameboy->cpu->m = 3;
}

void ADDHLSP(gb_gameboy* gameboy)
{
  uint16_t hl = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  hl += gameboy->cpu->sp;
  if (hl > WORD_MASK)
  {
    gameboy->cpu->f |= CARRY_FLAG;
  }
  else
  {
    gameboy->cpu->f &= BYTE_MASK ^ CARRY_FLAG;
  }
  gameboy->cpu->h = (hl >> 8) & BYTE_MASK;
  gameboy->cpu->l = hl & BYTE_MASK;
  gameboy->cpu->m = 3;
}

void ADDSPn(gb_gameboy* gameboy)
{
  uint8_t i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i > HALF_BYTE_MASK)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  gameboy->cpu->sp += i;
  gameboy->cpu->m = 4;
}

void ADCr_b(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->b;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADCr_c(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->c;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->c ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADCr_d(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->d;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->d ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADCr_e(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->e;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->e ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADCr_h(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->h;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->h ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADCr_l(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->l;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->l ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADCr_a(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a += gameboy->cpu->a;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->a ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ADCHL(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  gameboy->cpu->a += m;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->a ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void ADCn(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->a += m;
  gameboy->cpu->pc++;
  gameboy->cpu->a += (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a > BYTE_MASK) ? CARRY_FLAG : NO_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->a ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void SUBr_b(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->b;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SUBr_c(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->c;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->c ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SUBr_d(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->d;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->d ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SUBr_e(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->e;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->e ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SUBr_h(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->h;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->h ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SUBr_l(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->l;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->l ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SUBr_a(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->a;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->a ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SUBHL(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  gameboy->cpu->a -= m;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ m ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void SUBn(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->a -= m;
  gameboy->cpu->pc++;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ m ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void SBCr_b(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->b;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SBCr_c(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->c;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->c ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SBCr_d(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->d;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->d ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SBCr_e(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->e;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->e ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SBCr_h(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->h;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->h ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SBCr_l(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->l;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->l ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SBCr_a(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  gameboy->cpu->a -= gameboy->cpu->a;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->a ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void SBCHL(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  gameboy->cpu->a -= m;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void SBCn(gb_gameboy* gameboy)
{
  uint8_t a = gameboy->cpu->a;
  uint8_t m = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->a -= m;
  gameboy->cpu->pc++;
  gameboy->cpu->a -= (gameboy->cpu->f & CARRY_FLAG) ? 1 : 0;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ a) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void CPr_b(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a - gameboy->cpu->b;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void CPr_c(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a - gameboy->cpu->c;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->c ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void CPr_d(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a - gameboy->cpu->d;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->d ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void CPr_e(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a - gameboy->cpu->e;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->e ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void CPr_h(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a - gameboy->cpu->h;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->h ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void CPr_l(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a - gameboy->cpu->l;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->l ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void CPr_a(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a - gameboy->cpu->a;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->a ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void CPHL(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a;
  int m = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i -= m;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void CPn(gb_gameboy* gameboy)
{
  int i = gameboy->cpu->a;
  int m = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  i -= m;
  gameboy->cpu->pc++;
  gameboy->cpu->f = (i < 0) ? SUBTRACT_FLAG | CARRY_FLAG : SUBTRACT_FLAG;
  i &= BYTE_MASK;
  if (!i)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  if ((gameboy->cpu->a ^ gameboy->cpu->b ^ i) & CARRY_FLAG)
  {
    gameboy->cpu->f |= HALF_CARRY_FLAG;
  }
  gameboy->cpu->m = 2;
}

void DAA(gb_gameboy* gameboy)
{
  int a = gameboy->cpu->a;
  if ((gameboy->cpu->f & HALF_CARRY_FLAG) || ((gameboy->cpu->a & 15) > 9))
  {
    gameboy->cpu->a += 6;
  }
  gameboy->cpu->f &= BYTE_MASK ^ CARRY_FLAG;
  if ((gameboy->cpu->f & HALF_CARRY_FLAG) || (a > 0x99))
  {
    gameboy->cpu->a += 0x60;
    gameboy->cpu->f |= CARRY_FLAG;
  }
  gameboy->cpu->m = 1;
}

void ANDr_b(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gameboy->cpu->b;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ANDr_c(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gameboy->cpu->c;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ANDr_d(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gameboy->cpu->d;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ANDr_e(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gameboy->cpu->e;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ANDr_h(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gameboy->cpu->h;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ANDr_l(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gameboy->cpu->l;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ANDr_a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gameboy->cpu->a;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ANDHL(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void ANDn(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void ORr_b(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gameboy->cpu->b;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ORr_c(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gameboy->cpu->c;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ORr_d(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gameboy->cpu->d;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ORr_e(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gameboy->cpu->e;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ORr_h(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gameboy->cpu->h;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ORr_l(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gameboy->cpu->l;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ORr_a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gameboy->cpu->a;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void ORHL(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void ORn(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void XORr_b(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gameboy->cpu->b;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void XORr_c(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gameboy->cpu->c;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void XORr_d(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gameboy->cpu->d;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void XORr_e(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gameboy->cpu->e;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void XORr_h(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gameboy->cpu->h;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void XORr_l(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gameboy->cpu->l;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void XORr_a(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gameboy->cpu->a;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void XORHL(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void XORn(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void INCr_b(gb_gameboy* gameboy)
{
  gameboy->cpu->b++;
  gameboy->cpu->b &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->b ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void INCr_c(gb_gameboy* gameboy)
{
  gameboy->cpu->c++;
  gameboy->cpu->c &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->c ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void INCr_d(gb_gameboy* gameboy)
{
  gameboy->cpu->d++;
  gameboy->cpu->d &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->d ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void INCr_e(gb_gameboy* gameboy)
{
  gameboy->cpu->e++;
  gameboy->cpu->e &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->e ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void INCr_h(gb_gameboy* gameboy)
{
  gameboy->cpu->h++;
  gameboy->cpu->h &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->h ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void INCr_l(gb_gameboy* gameboy)
{
  gameboy->cpu->l++;
  gameboy->cpu->l &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->l ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void INCr_a(gb_gameboy* gameboy)
{
  gameboy->cpu->a++;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void INCHLm(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) + 1;
  i &= BYTE_MASK;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->f = i ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void DECr_b(gb_gameboy* gameboy)
{
  gameboy->cpu->b--;
  gameboy->cpu->b &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->b ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void DECr_c(gb_gameboy* gameboy)
{
  gameboy->cpu->c--;
  gameboy->cpu->c &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->c ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void DECr_d(gb_gameboy* gameboy)
{
  gameboy->cpu->d--;
  gameboy->cpu->d &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->d ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void DECr_e(gb_gameboy* gameboy)
{
  gameboy->cpu->e--;
  gameboy->cpu->e &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->e ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void DECr_h(gb_gameboy* gameboy)
{
  gameboy->cpu->h--;
  gameboy->cpu->h &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->h ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void DECr_l(gb_gameboy* gameboy)
{
  gameboy->cpu->l--;
  gameboy->cpu->l &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->l ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void DECr_a(gb_gameboy* gameboy)
{
  gameboy->cpu->a--;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

// MARK

void DECHLm(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) - 1;
  i &= BYTE_MASK;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->f = i ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void INCBC(gb_gameboy* gameboy)
{
  gameboy->cpu->c = (gameboy->cpu->c + 1) & BYTE_MASK;
  if (!gameboy->cpu->c)
  {
    gameboy->cpu->b = (gameboy->cpu->b + 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 1;
}

void INCDE(gb_gameboy* gameboy)
{
  gameboy->cpu->e = (gameboy->cpu->e + 1) & BYTE_MASK;
  if (!gameboy->cpu->e)
  {
    gameboy->cpu->d = (gameboy->cpu->d + 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 1;
}

void INCHL(gb_gameboy* gameboy)
{
  gameboy->cpu->l = (gameboy->cpu->l + 1) & BYTE_MASK;
  if (!gameboy->cpu->l)
  {
    gameboy->cpu->h = (gameboy->cpu->h + 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 1;
}

void INCSP(gb_gameboy* gameboy)
{
  gameboy->cpu->sp = (gameboy->cpu->sp + 1) & WORD_MASK;
  gameboy->cpu->m = 1;
}

void DECBC(gb_gameboy* gameboy)
{
  gameboy->cpu->c = (gameboy->cpu->c - 1) & BYTE_MASK;
  if (gameboy->cpu->c == BYTE_MASK)
  {
    gameboy->cpu->b = (gameboy->cpu->b - 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 1;
}

void DECDE(gb_gameboy* gameboy)
{
  gameboy->cpu->e = (gameboy->cpu->e - 1) & BYTE_MASK;
  if (gameboy->cpu->e == BYTE_MASK)
  {
    gameboy->cpu->d = (gameboy->cpu->d - 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 1;
}

void DECHL(gb_gameboy* gameboy)
{
  gameboy->cpu->l = (gameboy->cpu->l - 1) & BYTE_MASK;
  if (gameboy->cpu->l == BYTE_MASK)
  {
    gameboy->cpu->h = (gameboy->cpu->h - 1) & BYTE_MASK;
  }
  gameboy->cpu->m = 1;
}

void DECSP(gb_gameboy* gameboy)
{
  gameboy->cpu->sp = (gameboy->cpu->sp - 1) & WORD_MASK;
  gameboy->cpu->m = 1;
}

void BIT0b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT0c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT0d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT0e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT0h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT0l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT0a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT0m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x01) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES0b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= 0xFE;
  gameboy->cpu->m = 2;
}

void RES0c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= 0xFE;
  gameboy->cpu->m = 2;
}

void RES0d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= 0xFE;
  gameboy->cpu->m = 2;
}

void RES0e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= 0xFE;
  gameboy->cpu->m = 2;
}

void RES0h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= 0xFE;
  gameboy->cpu->m = 2;
}

void RES0l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= 0xFE;
  gameboy->cpu->m = 2;
}

void RES0a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= 0xFE;
  gameboy->cpu->m = 2;
}

void RES0m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= 0xFE;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET0b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= 0x01;
  gameboy->cpu->m = 2;
}

void SET0c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= 0x01;
  gameboy->cpu->m = 2;
}

void SET0d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= 0x01;
  gameboy->cpu->m = 2;
}

void SET0e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= 0x01;
  gameboy->cpu->m = 2;
}

void SET0h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= 0x01;
  gameboy->cpu->m = 2;
}

void SET0l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= 0x01;
  gameboy->cpu->m = 2;
}

void SET0a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= 0x01;
  gameboy->cpu->m = 2;
}

void SET0m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= 0x01;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void BIT1b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT1c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT1d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT1e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT1h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT1l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT1a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT1m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x02) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES1b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= 0xFD;
  gameboy->cpu->m = 2;
}

void RES1c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= 0xFD;
  gameboy->cpu->m = 2;
}

void RES1d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= 0xFD;
  gameboy->cpu->m = 2;
}

void RES1e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= 0xFD;
  gameboy->cpu->m = 2;
}

void RES1h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= 0xFD;
  gameboy->cpu->m = 2;
}

void RES1l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= 0xFD;
  gameboy->cpu->m = 2;
}

void RES1a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= 0xFD;
  gameboy->cpu->m = 2;
}

void RES1m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= 0xFD;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET1b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= 0x02;
  gameboy->cpu->m = 2;
}

void SET1c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= 0x02;
  gameboy->cpu->m = 2;
}

void SET1d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= 0x02;
  gameboy->cpu->m = 2;
}

void SET1e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= 0x02;
  gameboy->cpu->m = 2;
}

void SET1h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= 0x02;
  gameboy->cpu->m = 2;
}

void SET1l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= 0x02;
  gameboy->cpu->m = 2;
}

void SET1a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= 0x02;
  gameboy->cpu->m = 2;
}

void SET1m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= 0x02;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void BIT2b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT2c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT2d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT2e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT2h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT2l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT2a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT2m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x04) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES2b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= 0xFB;
  gameboy->cpu->m = 2;
}

void RES2c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= 0xFB;
  gameboy->cpu->m = 2;
}

void RES2d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= 0xFB;
  gameboy->cpu->m = 2;
}

void RES2e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= 0xFB;
  gameboy->cpu->m = 2;
}

void RES2h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= 0xFB;
  gameboy->cpu->m = 2;
}

void RES2l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= 0xFB;
  gameboy->cpu->m = 2;
}

void RES2a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= 0xFB;
  gameboy->cpu->m = 2;
}

void RES2m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= 0xFB;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET2b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= 0x04;
  gameboy->cpu->m = 2;
}

void SET2c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= 0x04;
  gameboy->cpu->m = 2;
}

void SET2d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= 0x04;
  gameboy->cpu->m = 2;
}

void SET2e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= 0x04;
  gameboy->cpu->m = 2;
}

void SET2h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= 0x04;
  gameboy->cpu->m = 2;
}

void SET2l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= 0x04;
  gameboy->cpu->m = 2;
}

void SET2a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= 0x04;
  gameboy->cpu->m = 2;
}

void SET2m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= 0x04;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void BIT3b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT3c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT3d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT3e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT3h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT3l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT3a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT3m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x08) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES3b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= 0xF7;
  gameboy->cpu->m = 2;
}

void RES3c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= 0xF7;
  gameboy->cpu->m = 2;
}

void RES3d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= 0xF7;
  gameboy->cpu->m = 2;
}

void RES3e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= 0xF7;
  gameboy->cpu->m = 2;
}

void RES3h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= 0xF7;
  gameboy->cpu->m = 2;
}

void RES3l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= 0xF7;
  gameboy->cpu->m = 2;
}

void RES3a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= 0xF7;
  gameboy->cpu->m = 2;
}

void RES3m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= 0xF7;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET3b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= 0x08;
  gameboy->cpu->m = 2;
}

void SET3c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= 0x08;
  gameboy->cpu->m = 2;
}

void SET3d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= 0x08;
  gameboy->cpu->m = 2;
}

void SET3e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= 0x08;
  gameboy->cpu->m = 2;
}

void SET3h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= 0x08;
  gameboy->cpu->m = 2;
}

void SET3l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= 0x08;
  gameboy->cpu->m = 2;
}

void SET3a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= 0x08;
  gameboy->cpu->m = 2;
}

void SET3m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= 0x08;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void BIT4b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT4c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT4d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT4e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT4h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT4l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT4a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT4m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x10) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES4b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= BYTE_MASK ^ CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void RES4c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= BYTE_MASK ^ CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void RES4d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= BYTE_MASK ^ CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void RES4e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= BYTE_MASK ^ CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void RES4h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= BYTE_MASK ^ CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void RES4l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= BYTE_MASK ^ CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void RES4a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= BYTE_MASK ^ CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void RES4m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= BYTE_MASK ^ CARRY_FLAG;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET4b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= 0x10;
  gameboy->cpu->m = 2;
}

void SET4c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= 0x10;
  gameboy->cpu->m = 2;
}

void SET4d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= 0x10;
  gameboy->cpu->m = 2;
}

void SET4e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= 0x10;
  gameboy->cpu->m = 2;
}

void SET4h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= 0x10;
  gameboy->cpu->m = 2;
}

void SET4l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= 0x10;
  gameboy->cpu->m = 2;
}

void SET4a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= 0x10;
  gameboy->cpu->m = 2;
}

void SET4m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= 0x10;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void BIT5b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT5c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT5d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT5e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT5h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT5l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT5a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT5m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x20) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES5b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= 0xDF;
  gameboy->cpu->m = 2;
}

void RES5c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= 0xDF;
  gameboy->cpu->m = 2;
}

void RES5d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= 0xDF;
  gameboy->cpu->m = 2;
}

void RES5e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= 0xDF;
  gameboy->cpu->m = 2;
}

void RES5h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= 0xDF;
  gameboy->cpu->m = 2;
}

void RES5l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= 0xDF;
  gameboy->cpu->m = 2;
}

void RES5a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= 0xDF;
  gameboy->cpu->m = 2;
}

void RES5m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= 0xDF;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET5b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= HALF_CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void SET5c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= HALF_CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void SET5d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= HALF_CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void SET5e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= HALF_CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void SET5h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= HALF_CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void SET5l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= HALF_CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void SET5a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= HALF_CARRY_FLAG;
  gameboy->cpu->m = 2;
}

void SET5m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= HALF_CARRY_FLAG;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void BIT6b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT6c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT6d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT6e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT6h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT6l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT6a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT6m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x40) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES6b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= 0xBF;
  gameboy->cpu->m = 2;
}

void RES6c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= 0xBF;
  gameboy->cpu->m = 2;
}

void RES6d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= 0xBF;
  gameboy->cpu->m = 2;
}

void RES6e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= 0xBF;
  gameboy->cpu->m = 2;
}

void RES6h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= 0xBF;
  gameboy->cpu->m = 2;
}

void RES6l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= 0xBF;
  gameboy->cpu->m = 2;
}

void RES6a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= 0xBF;
  gameboy->cpu->m = 2;
}

void RES6m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= 0xBF;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET6b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= 0x40;
  gameboy->cpu->m = 2;
}

void SET6c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= 0x40;
  gameboy->cpu->m = 2;
}

void SET6d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= 0x40;
  gameboy->cpu->m = 2;
}

void SET6e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= 0x40;
  gameboy->cpu->m = 2;
}

void SET6h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= 0x40;
  gameboy->cpu->m = 2;
}

void SET6l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= 0x40;
  gameboy->cpu->m = 2;
}

void SET6a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= 0x40;
  gameboy->cpu->m = 2;
}

void SET6m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= 0x40;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void BIT7b(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->b & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT7c(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->c & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT7d(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->d & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT7e(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->e & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT7h(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->h & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT7l(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->l & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT7a(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gameboy->cpu->a & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void BIT7m(gb_gameboy* gameboy)
{
  gameboy->cpu->f &= 0x1F;
  gameboy->cpu->f |= HALF_CARRY_FLAG;
  gameboy->cpu->f = (gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l) & 0x80) ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 3;
}

void RES7b(gb_gameboy* gameboy)
{
  gameboy->cpu->b &= 0x7F;
  gameboy->cpu->m = 2;
}

void RES7c(gb_gameboy* gameboy)
{
  gameboy->cpu->c &= 0x7F;
  gameboy->cpu->m = 2;
}

void RES7d(gb_gameboy* gameboy)
{
  gameboy->cpu->d &= 0x7F;
  gameboy->cpu->m = 2;
}

void RES7e(gb_gameboy* gameboy)
{
  gameboy->cpu->e &= 0x7F;
  gameboy->cpu->m = 2;
}

void RES7h(gb_gameboy* gameboy)
{
  gameboy->cpu->h &= 0x7F;
  gameboy->cpu->m = 2;
}

void RES7l(gb_gameboy* gameboy)
{
  gameboy->cpu->l &= 0x7F;
  gameboy->cpu->m = 2;
}

void RES7a(gb_gameboy* gameboy)
{
  gameboy->cpu->a &= 0x7F;
  gameboy->cpu->m = 2;
}

void RES7m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i &= 0x7F;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void SET7b(gb_gameboy* gameboy)
{
  gameboy->cpu->b |= ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void SET7c(gb_gameboy* gameboy)
{
  gameboy->cpu->c |= ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void SET7d(gb_gameboy* gameboy)
{
  gameboy->cpu->d |= ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void SET7e(gb_gameboy* gameboy)
{
  gameboy->cpu->e |= ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void SET7h(gb_gameboy* gameboy)
{
  gameboy->cpu->h |= ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void SET7l(gb_gameboy* gameboy)
{
  gameboy->cpu->l |= ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void SET7a(gb_gameboy* gameboy)
{
  gameboy->cpu->a |= ZERO_FLAG;
  gameboy->cpu->m = 2;
}

void SET7m(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  i |= ZERO_FLAG;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->m = 4;
}

void RLA(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->a & 0x80 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a << 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 1;
}

void RLCA(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->a & 0x80 ? 1 : 0;
  int co = gameboy->cpu->a & 0x80 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a << 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 1;
}

void RRA(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 0x80 : 0;
  int co = gameboy->cpu->a & 1 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a >> 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 1;
}

void RRCA(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->a & 1 ? 0x80 : 0;
  int co = gameboy->cpu->a & 1 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a >> 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 1;
}

void RLr_b(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->b & 0x80 ? 0x10 : 0;
  gameboy->cpu->b = (gameboy->cpu->b << 1) + ci;
  gameboy->cpu->b &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLr_c(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->c & 0x80 ? 0x10 : 0;
  gameboy->cpu->c = (gameboy->cpu->c << 1) + ci;
  gameboy->cpu->c &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLr_d(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->d & 0x80 ? 0x10 : 0;
  gameboy->cpu->d = (gameboy->cpu->d << 1) + ci;
  gameboy->cpu->d &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLr_e(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->e & 0x80 ? 0x10 : 0;
  gameboy->cpu->e = (gameboy->cpu->e << 1) + ci;
  gameboy->cpu->e &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLr_h(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->h & 0x80 ? 0x10 : 0;
  gameboy->cpu->h = (gameboy->cpu->h << 1) + ci;
  gameboy->cpu->h &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLr_l(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->l & 0x80 ? 0x10 : 0;
  gameboy->cpu->l = (gameboy->cpu->l << 1) + ci;
  gameboy->cpu->l &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLr_a(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = gameboy->cpu->a & 0x80 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a << 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLHL(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  int ci = gameboy->cpu->f & 0x10 ? 1 : 0;
  int co = i & 0x80 ? 0x10 : 0;
  i = (i << 1) + ci;
  i &= BYTE_MASK;
  gameboy->cpu->f = (i) ? 0 : ZERO_FLAG;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 4;
}

void RLCr_b(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->b & 0x80 ? 1 : 0;
  int co = gameboy->cpu->b & 0x80 ? 0x10 : 0;
  gameboy->cpu->b = (gameboy->cpu->b << 1) + ci;
  gameboy->cpu->b &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLCr_c(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->c & 0x80 ? 1 : 0;
  int co = gameboy->cpu->c & 0x80 ? 0x10 : 0;
  gameboy->cpu->c = (gameboy->cpu->c << 1) + ci;
  gameboy->cpu->c &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLCr_d(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->d & 0x80 ? 1 : 0;
  int co = gameboy->cpu->d & 0x80 ? 0x10 : 0;
  gameboy->cpu->d = (gameboy->cpu->d << 1) + ci;
  gameboy->cpu->d &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLCr_e(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->e & 0x80 ? 1 : 0;
  int co = gameboy->cpu->e & 0x80 ? 0x10 : 0;
  gameboy->cpu->e = (gameboy->cpu->e << 1) + ci;
  gameboy->cpu->e &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLCr_h(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->h & 0x80 ? 1 : 0;
  int co = gameboy->cpu->h & 0x80 ? 0x10 : 0;
  gameboy->cpu->h = (gameboy->cpu->h << 1) + ci;
  gameboy->cpu->h &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLCr_l(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->l & 0x80 ? 1 : 0;
  int co = gameboy->cpu->l & 0x80 ? 0x10 : 0;
  gameboy->cpu->l = (gameboy->cpu->l << 1) + ci;
  gameboy->cpu->l &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLCr_a(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->a & 0x80 ? 1 : 0;
  int co = gameboy->cpu->a & 0x80 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a << 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RLCHL(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  int ci = i&0x80 ? 1 : 0;
  int co = i&0x80 ? 0x10 : 0;
  i = (i << 1) + ci;
  i &= BYTE_MASK;
  gameboy->cpu->f = (i) ? 0 : ZERO_FLAG;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 4;
}

void RRr_b(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->b & 1 ? 0x10 : 0;
  gameboy->cpu->b = (gameboy->cpu->b >> 1) + ci;
  gameboy->cpu->b &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRr_c(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->c & 1 ? 0x10 : 0;
  gameboy->cpu->c = (gameboy->cpu->c >> 1) + ci;
  gameboy->cpu->c &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRr_d(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->d & 1 ? 0x10 : 0;
  gameboy->cpu->d = (gameboy->cpu->d >> 1) + ci;
  gameboy->cpu->d &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRr_e(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->e & 1 ? 0x10 : 0;
  gameboy->cpu->e = (gameboy->cpu->e >> 1) + ci;
  gameboy->cpu->e &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRr_h(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->h & 1 ? 0x10 : 0;
  gameboy->cpu->h = (gameboy->cpu->h >> 1) + ci;
  gameboy->cpu->h &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRr_l(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->l & 1 ? 0x10 : 0;
  gameboy->cpu->l = (gameboy->cpu->l >> 1) + ci;
  gameboy->cpu->l &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRr_a(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->a & 1 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a >> 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRHL(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  int ci = gameboy->cpu->f & 0x10 ? ZERO_FLAG : 0;
  int co = i&1 ? 0x10 : 0;
  i = (i >> 1) + ci;
  i &= BYTE_MASK;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->f = (i) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 4;
}

void RRCr_b(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->b & 1 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->b & 1 ? 0x10 : 0;
  gameboy->cpu->b = (gameboy->cpu->b >> 1) + ci;
  gameboy->cpu->b &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRCr_c(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->c & 1 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->c & 1 ? 0x10 : 0;
  gameboy->cpu->c = (gameboy->cpu->c >> 1) + ci;
  gameboy->cpu->c &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRCr_d(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->d & 1 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->d & 1 ? 0x10 : 0;
  gameboy->cpu->d = (gameboy->cpu->d >> 1) + ci;
  gameboy->cpu->d &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRCr_e(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->e & 1 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->e & 1 ? 0x10 : 0;
  gameboy->cpu->e = (gameboy->cpu->e >> 1) + ci;
  gameboy->cpu->e &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRCr_h(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->h & 1 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->h & 1 ? 0x10 : 0;
  gameboy->cpu->h = (gameboy->cpu->h >> 1) + ci;
  gameboy->cpu->h &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRCr_l(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->l & 1 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->l & 1 ? 0x10 : 0;
  gameboy->cpu->l = (gameboy->cpu->l >> 1) + ci;
  gameboy->cpu->l &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRCr_a(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->a & 1 ? ZERO_FLAG : 0;
  int co = gameboy->cpu->a & 1 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a >> 1) + ci;
  gameboy->cpu->a &= BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void RRCHL(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l);
  int ci = i&1 ? ZERO_FLAG : 0;
  int co = i&1 ? 0x10 : 0;
  i = (i >> 1) + ci;
  i &= BYTE_MASK;
  gb_mmu_wb(gameboy, (gameboy->cpu->h << 8) + gameboy->cpu->l, i);
  gameboy->cpu->f = (i) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 4;
}

void SLAr_b(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->b & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->b = (gameboy->cpu->b << 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLAr_c(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->c & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->c = (gameboy->cpu->c << 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLAr_d(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->d & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->d = (gameboy->cpu->d << 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLAr_e(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->e & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->e = (gameboy->cpu->e << 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLAr_h(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->h & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->h = (gameboy->cpu->h << 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLAr_l(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->l & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->l = (gameboy->cpu->l << 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLAr_a(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->a & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a << 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLLr_b(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->b & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->b = (gameboy->cpu->b << 1) & BYTE_MASK+1;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLLr_c(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->c & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->c = (gameboy->cpu->c << 1) & BYTE_MASK+1;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLLr_d(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->d & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->d = (gameboy->cpu->d << 1) & BYTE_MASK+1;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLLr_e(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->e & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->e = (gameboy->cpu->e << 1) & BYTE_MASK+1;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLLr_h(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->h & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->h = (gameboy->cpu->h << 1) & BYTE_MASK+1;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLLr_l(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->l & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->l = (gameboy->cpu->l << 1) & BYTE_MASK+1;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SLLr_a(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->a & ZERO_FLAG ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a << 1) & BYTE_MASK+1;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRAr_b(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->b & ZERO_FLAG;
  int co = gameboy->cpu->b & 1 ? 0x10 : 0;
  gameboy->cpu->b = ((gameboy->cpu->b >> 1)+ci) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRAr_c(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->c & ZERO_FLAG;
  int co = gameboy->cpu->c & 1 ? 0x10 : 0;
  gameboy->cpu->c = ((gameboy->cpu->c >> 1)+ci) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRAr_d(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->d & ZERO_FLAG;
  int co = gameboy->cpu->d & 1 ? 0x10 : 0;
  gameboy->cpu->d = ((gameboy->cpu->d >> 1)+ci) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRAr_e(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->e & ZERO_FLAG;
  int co = gameboy->cpu->e & 1 ? 0x10 : 0;
  gameboy->cpu->e = ((gameboy->cpu->e >> 1)+ci) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRAr_h(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->h & ZERO_FLAG;
  int co = gameboy->cpu->h & 1 ? 0x10 : 0;
  gameboy->cpu->h = ((gameboy->cpu->h >> 1)+ci) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRAr_l(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->l & ZERO_FLAG;
  int co = gameboy->cpu->l & 1 ? 0x10 : 0;
  gameboy->cpu->l = ((gameboy->cpu->l >> 1)+ci) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRAr_a(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->a & ZERO_FLAG;
  int co = gameboy->cpu->a & 1 ? 0x10 : 0;
  gameboy->cpu->a = ((gameboy->cpu->a >> 1)+ci) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRLr_b(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->b & 1 ? 0x10 : 0;
  gameboy->cpu->b = (gameboy->cpu->b >> 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->b) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRLr_c(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->c & 1 ? 0x10 : 0;
  gameboy->cpu->c = (gameboy->cpu->c >> 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->c) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRLr_d(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->d & 1 ? 0x10 : 0;
  gameboy->cpu->d = (gameboy->cpu->d >> 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->d) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRLr_e(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->e & 1 ? 0x10 : 0;
  gameboy->cpu->e = (gameboy->cpu->e >> 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->e) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRLr_h(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->h & 1 ? 0x10 : 0;
  gameboy->cpu->h = (gameboy->cpu->h >> 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->h) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRLr_l(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->l & 1 ? 0x10 : 0;
  gameboy->cpu->l = (gameboy->cpu->l >> 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->l) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void SRLr_a(gb_gameboy* gameboy)
{
  int co = gameboy->cpu->a & 1 ? 0x10 : 0;
  gameboy->cpu->a = (gameboy->cpu->a >> 1) & BYTE_MASK;
  gameboy->cpu->f = (gameboy->cpu->a) ? 0 : ZERO_FLAG;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + co;
  gameboy->cpu->m = 2;
}

void CPL(gb_gameboy* gameboy)
{
  gameboy->cpu->a ^= BYTE_MASK;
  gameboy->cpu->f = gameboy->cpu->a ? 0 : ZERO_FLAG;
  gameboy->cpu->m = 1;
}

void NEG(gb_gameboy* gameboy)
{
  gameboy->cpu->a = 0 - gameboy->cpu->a;
  gameboy->cpu->f = (gameboy->cpu->a < 0) ? 0x10 : 0;
  gameboy->cpu->a &= BYTE_MASK;
  if (!gameboy->cpu->a)
  {
    gameboy->cpu->f |= ZERO_FLAG;
  }
  gameboy->cpu->m = 2;
}

void CCF(gb_gameboy* gameboy)
{
  int ci = gameboy->cpu->f & 0x10 ? 0 : 0x10;
  gameboy->cpu->f = (gameboy->cpu->f & (BYTE_MASK ^ CARRY_FLAG)) + ci;
  gameboy->cpu->m = 1;
}

void SCF(gb_gameboy* gameboy)
{
  gameboy->cpu->f |= 0x10;
  gameboy->cpu->m = 1;
}

void PUSHBC(gb_gameboy* gameboy)
{
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->b);
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->c);
  gameboy->cpu->m = 3;
}

void PUSHDE(gb_gameboy* gameboy)
{
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->d);
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->e);
  gameboy->cpu->m = 3;
}

void PUSHHL(gb_gameboy* gameboy)
{
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->h);
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->l);
  gameboy->cpu->m = 3;
}

void PUSHAF(gb_gameboy* gameboy)
{
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->a);
  gameboy->cpu->sp--;
  gb_mmu_wb(gameboy, gameboy->cpu->sp,gameboy->cpu->f);
  gameboy->cpu->m = 3;
}

void POPBC(gb_gameboy* gameboy)
{
  gameboy->cpu->c = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->b = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->m = 3;
}

void POPDE(gb_gameboy* gameboy)
{
  gameboy->cpu->e = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->d = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->m = 3;
}

void POPHL(gb_gameboy* gameboy)
{
  gameboy->cpu->l = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->h = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->m = 3;
}

void POPAF(gb_gameboy* gameboy)
{
  gameboy->cpu->f = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->a = gb_mmu_rb(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp++;
  gameboy->cpu->m = 3;
}

void JPnn(gb_gameboy* gameboy)
{
  gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
  gameboy->cpu->m = 3;
}

void JPHL(gb_gameboy* gameboy)
{
  gameboy->cpu->pc = (gameboy->cpu->h << 8) + gameboy->cpu->l;
  gameboy->cpu->m = 1;
}

void JPNZnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & ZERO_FLAG) == 0x00)
  {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m++;
  } else
  {
    gameboy->cpu->pc += 2;
  }
}

void JPZnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & ZERO_FLAG) == ZERO_FLAG)
  {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m++;
  }
  else
  {
    gameboy->cpu->pc += 2;
  }
 }

void JPNCnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & CARRY_FLAG) == 0x00)
  {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m++;
  }
  else
  {
    gameboy->cpu->pc += 2;
  }
}

void JPCnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & CARRY_FLAG) == CARRY_FLAG)
  {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m++;
  }
  else
  {
    gameboy->cpu->pc += 2;
  }
 }

void JRn(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i>127)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
  gameboy->cpu->pc += i;
  gameboy->cpu->m++;
}

void JRNZn(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i>127)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
  if ((gameboy->cpu->f & ZERO_FLAG) == 0x00)
  {
    gameboy->cpu->pc += i;
    gameboy->cpu->m++;
  }
}

void JRZn(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i>127)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
  if ((gameboy->cpu->f & ZERO_FLAG) == ZERO_FLAG)
  {
    gameboy->cpu->pc += i;
    gameboy->cpu->m++;
  }
 }

void JRNCn(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i>127)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
  if ((gameboy->cpu->f & CARRY_FLAG) == 0x00)
  {
    gameboy->cpu->pc += i;
    gameboy->cpu->m++;
  }
}

void JRCn(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i>127)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
  if ((gameboy->cpu->f & CARRY_FLAG) == CARRY_FLAG)
  {
    gameboy->cpu->pc += i;
    gameboy->cpu->m++;
  }
 }

void DJNZn(gb_gameboy* gameboy)
{
  int i = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  if (i>127)
  {
    i = -((~i + 1) & BYTE_MASK);
  }
  gameboy->cpu->pc++;
  gameboy->cpu->m = 2;
  gameboy->cpu->b--;
  if (gameboy->cpu->b)
  {
    gameboy->cpu->pc += i;
    gameboy->cpu->m++;
  }
}

void CALLnn(gb_gameboy* gameboy)
{
  gameboy->cpu->sp -= 2;
  gb_mmu_ww(gameboy, gameboy->cpu->sp, gameboy->cpu->pc + 2);
  gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
  gameboy->cpu->m = 5;
}

void CALLNZnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & ZERO_FLAG) == 0x00)
  {
    gameboy->cpu->sp -= 2;
    gb_mmu_ww(gameboy, gameboy->cpu->sp, gameboy->cpu->pc + 2);
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m += 2;
  }
  else{
    gameboy->cpu->pc+=2;
  }
}

void CALLZnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & ZERO_FLAG) == ZERO_FLAG)
  {
    gameboy->cpu->sp -= 2;
    gb_mmu_ww(gameboy, gameboy->cpu->sp, gameboy->cpu->pc + 2);
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m += 2;
  }
  else
  {
    gameboy->cpu->pc += 2;
  }
}

void CALLNCnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & CARRY_FLAG) == 0x00)
  {
    gameboy->cpu->sp -= 2;
    gb_mmu_ww(gameboy, gameboy->cpu->sp, gameboy->cpu->pc + 2);
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m += 2;
  }
  else
  {
    gameboy->cpu->pc += 2;
  }
}

void CALLCnn(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 3;
  if ((gameboy->cpu->f & CARRY_FLAG) == CARRY_FLAG)
  {
    gameboy->cpu->sp -= 2;
    gb_mmu_ww(gameboy, gameboy->cpu->sp, gameboy->cpu->pc + 2);
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->pc);
    gameboy->cpu->m += 2;
  }
  else
  {
    gameboy->cpu->pc += 2;
  }
}

void RET(gb_gameboy* gameboy)
{
  gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->sp);
  gameboy->cpu->sp += 2;
  gameboy->cpu->m = 3;
}

void RETNZ(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 1;
  if ((gameboy->cpu->f & ZERO_FLAG) == 0x00)
  {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->sp);
    gameboy->cpu->sp += 2;
    gameboy->cpu->m += 2;
  }
}

void RETZ(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 1;
  if ((gameboy->cpu->f & ZERO_FLAG) == ZERO_FLAG) {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->sp);
    gameboy->cpu->sp += 2;
    gameboy->cpu->m += 2;
  }
}

void RETNC(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 1;
  if ((gameboy->cpu->f & CARRY_FLAG) == 0x00) {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->sp);
    gameboy->cpu->sp += 2;
    gameboy->cpu->m += 2;
  }
}

void RETC(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 1;
  if ((gameboy->cpu->f & CARRY_FLAG) == CARRY_FLAG) {
    gameboy->cpu->pc = gb_mmu_rw(gameboy, gameboy->cpu->sp);
    gameboy->cpu->sp += 2;
    gameboy->cpu->m += 2;
  }
}

void NOP(gb_gameboy* gameboy)
{
  gameboy->cpu->m = 1;
}

void MAPcb(gb_gameboy* gameboy)
{
  gameboy->cpu->last_bit_instruction = gb_mmu_rb(gameboy, gameboy->cpu->pc);
  gameboy->cpu->pc++;
  gb_bit_ops[gameboy->cpu->last_bit_instruction](gameboy);
}

void XX(gb_gameboy* gameboy)
{
  gb_err_panic(gameboy, "Unimplemented instruction: 0x%02x", gameboy->cpu->last_instruction);
}

void XXX(gb_gameboy* gameboy)
{
  gb_err_panic(gameboy, "Unimplemented bit instruction: 0x%02x", gameboy->cpu->last_bit_instruction);
}


/* Op tables */

void (*gb_ops[]) (gb_gameboy* gameboy) = {
  NOP,
  LDBCnn,
  LDBCmA,
  INCBC,
  INCr_b,
  DECr_b,
  LDrn_b,
  RLCA,
  LDmmSP,
  ADDHLBC,
  LDABCm,
  DECBC,
  INCr_c,
  DECr_c,
  LDrn_c,
  RRCA,
  DJNZn,
  LDDEnn,
  LDDEmA,
  INCDE,
  INCr_d,
  DECr_d,
  LDrn_d,
  RLA,
  JRn,
  ADDHLDE,
  LDADEm,
  DECDE,
  INCr_e,
  DECr_e,
  LDrn_e,
  RRA,
  JRNZn,
  LDHLnn,
  LDHLIA,
  INCHL,
  INCr_h,
  DECr_h,
  LDrn_h,
  DAA,
  JRZn,
  ADDHLHL,
  LDAHLI,
  DECHL,
  INCr_l,
  DECr_l,
  LDrn_l,
  CPL,
  JRNCn,
  LDSPnn,
  LDHLDA,
  INCSP,
  INCHLm,
  DECHLm,
  LDHLmn,
  SCF,
  JRCn,
  ADDHLSP,
  LDAHLD,
  DECSP,
  INCr_a,
  DECr_a,
  LDrn_a,
  CCF,
  LDrr_bb,
  LDrr_bc,
  LDrr_bd,
  LDrr_be,
  LDrr_bh,
  LDrr_bl,
  LDrHLm_b,
  LDrr_ba,
  LDrr_cb,
  LDrr_cc,
  LDrr_cd,
  LDrr_ce,
  LDrr_ch,
  LDrr_cl,
  LDrHLm_c,
  LDrr_ca,
  LDrr_db,
  LDrr_dc,
  LDrr_dd,
  LDrr_de,
  LDrr_dh,
  LDrr_dl,
  LDrHLm_d,
  LDrr_da,
  LDrr_eb,
  LDrr_ec,
  LDrr_ed,
  LDrr_ee,
  LDrr_eh,
  LDrr_el,
  LDrHLm_e,
  LDrr_ea,
  LDrr_hb,
  LDrr_hc,
  LDrr_hd,
  LDrr_he,
  LDrr_hh,
  LDrr_hl,
  LDrHLm_h,
  LDrr_ha,
  LDrr_lb,
  LDrr_lc,
  LDrr_ld,
  LDrr_le,
  LDrr_lh,
  LDrr_ll,
  LDrHLm_l,
  LDrr_la,
  LDHLmr_b,
  LDHLmr_c,
  LDHLmr_d,
  LDHLmr_e,
  LDHLmr_h,
  LDHLmr_l,
  XX,
  LDHLmr_a,
  LDrr_ab,
  LDrr_ac,
  LDrr_ad,
  LDrr_ae,
  LDrr_ah,
  LDrr_al,
  LDrHLm_a,
  LDrr_aa,
  ADDr_b,
  ADDr_c,
  ADDr_d,
  ADDr_e,
  ADDr_h,
  ADDr_l,
  ADDHL,
  ADDr_a,
  ADCr_b,
  ADCr_c,
  ADCr_d,
  ADCr_e,
  ADCr_h,
  ADCr_l,
  ADCHL,
  ADCr_a,
  SUBr_b,
  SUBr_c,
  SUBr_d,
  SUBr_e,
  SUBr_h,
  SUBr_l,
  SUBHL,
  SUBr_a,
  SBCr_b,
  SBCr_c,
  SBCr_d,
  SBCr_e,
  SBCr_h,
  SBCr_l,
  SBCHL,
  SBCr_a,
  ANDr_b,
  ANDr_c,
  ANDr_d,
  ANDr_e,
  ANDr_h,
  ANDr_l,
  ANDHL,
  ANDr_a,
  XORr_b,
  XORr_c,
  XORr_d,
  XORr_e,
  XORr_h,
  XORr_l,
  XORHL,
  XORr_a,
  ORr_b,
  ORr_c,
  ORr_d,
  ORr_e,
  ORr_h,
  ORr_l,
  ORHL,
  ORr_a,
  CPr_b,
  CPr_c,
  CPr_d,
  CPr_e,
  CPr_h,
  CPr_l,
  CPHL,
  CPr_a,
  RETNZ,
  POPBC,
  JPNZnn,
  JPnn,
  CALLNZnn,
  PUSHBC,
  ADDn,
  XX,
  RETZ,
  RET,
  JPZnn,
  MAPcb,
  CALLZnn,
  CALLnn,
  ADCn,
  XX,
  RETNC,
  POPDE,
  JPNCnn,
  XX,
  CALLNCnn,
  PUSHDE,
  SUBn,
  XX,
  RETC,
  XX,
  JPCnn,
  XX,
  CALLCnn,
  XX,
  SBCn,
  XX,
  LDIOnA,
  POPHL,
  LDIOCA,
  XX,
  XX,
  PUSHHL,
  ANDn,
  XX,
  ADDSPn,
  JPHL,
  LDmmA,
  XX,
  XX,
  XX,
  XORn,
  XX,
  LDAIOn,
  POPAF,
  LDAIOC,
  XX,
  XX,
  PUSHAF,
  ORn,
  XX,
  LDHLSPn,
  XX,
  LDAmm,
  XX,
  XX,
  XX,
  CPn,
  XX,
};


void (*gb_bit_ops[]) (gb_gameboy* gameboy) = {
  RLCr_b,
  RLCr_c,
  RLCr_d,
  RLCr_e,
  RLCr_h,
  RLCr_l,
  RLCHL,
  RLCr_a,
  RRCr_b,
  RRCr_c,
  RRCr_d,
  RRCr_e,
  RRCr_h,
  RRCr_l,
  RRCHL,
  RRCr_a,
  RLr_b,
  RLr_c,
  RLr_d,
  RLr_e,
  RLr_h,
  RLr_l,
  RLHL,
  RLr_a,
  RRr_b,
  RRr_c,
  RRr_d,
  RRr_e,
  RRr_h,
  RRr_l,
  RRHL,
  RRr_a,
  SLAr_b,
  SLAr_c,
  SLAr_d,
  SLAr_e,
  SLAr_h,
  SLAr_l,
  XXX,
  SLAr_a,
  SRAr_b,
  SRAr_c,
  SRAr_d,
  SRAr_e,
  SRAr_h,
  SRAr_l,
  XXX,
  SRAr_a,
  SWAPr_b,
  SWAPr_c,
  SWAPr_d,
  SWAPr_e,
  SWAPr_h,
  SWAPr_l,
  XXX,
  SWAPr_a,
  SRLr_b,
  SRLr_c,
  SRLr_d,
  SRLr_e,
  SRLr_h,
  SRLr_l,
  XXX,
  SRLr_a,
  BIT0b,
  BIT0c,
  BIT0d,
  BIT0e,
  BIT0h,
  BIT0l,
  BIT0m,
  BIT0a,
  BIT1b,
  BIT1c,
  BIT1d,
  BIT1e,
  BIT1h,
  BIT1l,
  BIT1m,
  BIT1a,
  BIT2b,
  BIT2c,
  BIT2d,
  BIT2e,
  BIT2h,
  BIT2l,
  BIT2m,
  BIT2a,
  BIT3b,
  BIT3c,
  BIT3d,
  BIT3e,
  BIT3h,
  BIT3l,
  BIT3m,
  BIT3a,
  BIT4b,
  BIT4c,
  BIT4d,
  BIT4e,
  BIT4h,
  BIT4l,
  BIT4m,
  BIT4a,
  BIT5b,
  BIT5c,
  BIT5d,
  BIT5e,
  BIT5h,
  BIT5l,
  BIT5m,
  BIT5a,
  BIT6b,
  BIT6c,
  BIT6d,
  BIT6e,
  BIT6h,
  BIT6l,
  BIT6m,
  BIT6a,
  BIT7b,
  BIT7c,
  BIT7d,
  BIT7e,
  BIT7h,
  BIT7l,
  BIT7m,
  BIT7a,
  RES0b,
  RES0c,
  RES0d,
  RES0e,
  RES0h,
  RES0l,
  RES0m,
  RES0a,
  RES1b,
  RES1c,
  RES1d,
  RES1e,
  RES1h,
  RES1l,
  RES1m,
  RES1a,
  RES2b,
  RES2c,
  RES2d,
  RES2e,
  RES2h,
  RES2l,
  RES2m,
  RES2a,
  RES3b,
  RES3c,
  RES3d,
  RES3e,
  RES3h,
  RES3l,
  RES3m,
  RES3a,
  RES4b,
  RES4c,
  RES4d,
  RES4e,
  RES4h,
  RES4l,
  RES4m,
  RES4a,
  RES5b,
  RES5c,
  RES5d,
  RES5e,
  RES5h,
  RES5l,
  RES5m,
  RES5a,
  RES6b,
  RES6c,
  RES6d,
  RES6e,
  RES6h,
  RES6l,
  RES6m,
  RES6a,
  RES7b,
  RES7c,
  RES7d,
  RES7e,
  RES7h,
  RES7l,
  RES7m,
  RES7a,
  SET0b,
  SET0c,
  SET0d,
  SET0e,
  SET0h,
  SET0l,
  SET0m,
  SET0a,
  SET1b,
  SET1c,
  SET1d,
  SET1e,
  SET1h,
  SET1l,
  SET1m,
  SET1a,
  SET2b,
  SET2c,
  SET2d,
  SET2e,
  SET2h,
  SET2l,
  SET2m,
  SET2a,
  SET3b,
  SET3c,
  SET3d,
  SET3e,
  SET3h,
  SET3l,
  SET3m,
  SET3a,
  SET4b,
  SET4c,
  SET4d,
  SET4e,
  SET4h,
  SET4l,
  SET4m,
  SET4a,
  SET5b,
  SET5c,
  SET5d,
  SET5e,
  SET5h,
  SET5l,
  SET5m,
  SET5a,
  SET6b,
  SET6c,
  SET6d,
  SET6e,
  SET6h,
  SET6l,
  SET6m,
  SET6a,
  SET7b,
  SET7c,
  SET7d,
  SET7e,
  SET7h,
  SET7l,
  SET7m,
  SET7a,
};
