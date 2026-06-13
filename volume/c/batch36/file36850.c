// fichero 36850 -- macros y constantes
#define LIMITE_36850 36950
#define FACTOR_36850 1

int aplicar_limite36850(int valor) {
    if (valor > LIMITE_36850) return LIMITE_36850;
    return valor * FACTOR_36850;
}
