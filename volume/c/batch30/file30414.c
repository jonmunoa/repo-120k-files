// fichero 30414 -- macros y constantes
#define LIMITE_30414 30514
#define FACTOR_30414 5

int aplicar_limite30414(int valor) {
    if (valor > LIMITE_30414) return LIMITE_30414;
    return valor * FACTOR_30414;
}
