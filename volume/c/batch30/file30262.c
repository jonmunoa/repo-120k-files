// fichero 30262 -- macros y constantes
#define LIMITE_30262 30362
#define FACTOR_30262 3

int aplicar_limite30262(int valor) {
    if (valor > LIMITE_30262) return LIMITE_30262;
    return valor * FACTOR_30262;
}
