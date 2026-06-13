// fichero 21142 -- macros y constantes
#define LIMITE_21142 21242
#define FACTOR_21142 3

int aplicar_limite21142(int valor) {
    if (valor > LIMITE_21142) return LIMITE_21142;
    return valor * FACTOR_21142;
}
