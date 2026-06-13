// fichero 14850 -- macros y constantes
#define LIMITE_14850 14950
#define FACTOR_14850 1

int aplicar_limite14850(int valor) {
    if (valor > LIMITE_14850) return LIMITE_14850;
    return valor * FACTOR_14850;
}
