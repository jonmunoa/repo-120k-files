// fichero 30438 -- macros y constantes
#define LIMITE_30438 30538
#define FACTOR_30438 4

int aplicar_limite30438(int valor) {
    if (valor > LIMITE_30438) return LIMITE_30438;
    return valor * FACTOR_30438;
}
