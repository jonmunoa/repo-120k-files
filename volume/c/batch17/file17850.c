// fichero 17850 -- macros y constantes
#define LIMITE_17850 17950
#define FACTOR_17850 1

int aplicar_limite17850(int valor) {
    if (valor > LIMITE_17850) return LIMITE_17850;
    return valor * FACTOR_17850;
}
