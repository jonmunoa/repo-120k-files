// fichero 26850 -- macros y constantes
#define LIMITE_26850 26950
#define FACTOR_26850 1

int aplicar_limite26850(int valor) {
    if (valor > LIMITE_26850) return LIMITE_26850;
    return valor * FACTOR_26850;
}
