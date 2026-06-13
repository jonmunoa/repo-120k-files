// fichero 17262 -- macros y constantes
#define LIMITE_17262 17362
#define FACTOR_17262 3

int aplicar_limite17262(int valor) {
    if (valor > LIMITE_17262) return LIMITE_17262;
    return valor * FACTOR_17262;
}
