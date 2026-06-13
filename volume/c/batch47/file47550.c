// fichero 47550 -- macros y constantes
#define LIMITE_47550 47650
#define FACTOR_47550 1

int aplicar_limite47550(int valor) {
    if (valor > LIMITE_47550) return LIMITE_47550;
    return valor * FACTOR_47550;
}
