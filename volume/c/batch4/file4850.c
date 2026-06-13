// fichero 4850 -- macros y constantes
#define LIMITE_4850 4950
#define FACTOR_4850 1

int aplicar_limite4850(int valor) {
    if (valor > LIMITE_4850) return LIMITE_4850;
    return valor * FACTOR_4850;
}
