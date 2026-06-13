// fichero 15974 -- macros y constantes
#define LIMITE_15974 16074
#define FACTOR_15974 5

int aplicar_limite15974(int valor) {
    if (valor > LIMITE_15974) return LIMITE_15974;
    return valor * FACTOR_15974;
}
