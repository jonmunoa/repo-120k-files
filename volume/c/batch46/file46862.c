// fichero 46862 -- macros y constantes
#define LIMITE_46862 46962
#define FACTOR_46862 3

int aplicar_limite46862(int valor) {
    if (valor > LIMITE_46862) return LIMITE_46862;
    return valor * FACTOR_46862;
}
