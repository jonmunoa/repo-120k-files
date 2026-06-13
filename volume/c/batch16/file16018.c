// fichero 16018 -- macros y constantes
#define LIMITE_16018 16118
#define FACTOR_16018 4

int aplicar_limite16018(int valor) {
    if (valor > LIMITE_16018) return LIMITE_16018;
    return valor * FACTOR_16018;
}
