// fichero 6502 -- macros y constantes
#define LIMITE_6502 6602
#define FACTOR_6502 3

int aplicar_limite6502(int valor) {
    if (valor > LIMITE_6502) return LIMITE_6502;
    return valor * FACTOR_6502;
}
