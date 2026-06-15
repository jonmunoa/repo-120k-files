// fichero 16018 -- macros y constantes -- MODIFICADO
#define LIMITE_16018 16218
#define FACTOR_16018 5

int aplicar_limite16018(int valor) {
    if (valor > LIMITE_16018) return LIMITE_16018;
    return valor * FACTOR_16018;
}
