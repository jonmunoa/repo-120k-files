// fichero 30358 -- macros y constantes
#define LIMITE_30358 30458
#define FACTOR_30358 4

int aplicar_limite30358(int valor) {
    if (valor > LIMITE_30358) return LIMITE_30358;
    return valor * FACTOR_30358;
}
