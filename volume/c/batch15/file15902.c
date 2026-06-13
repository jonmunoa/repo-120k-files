// fichero 15902 -- macros y constantes
#define LIMITE_15902 16002
#define FACTOR_15902 3

int aplicar_limite15902(int valor) {
    if (valor > LIMITE_15902) return LIMITE_15902;
    return valor * FACTOR_15902;
}
