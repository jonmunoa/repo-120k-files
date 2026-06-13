// fichero 20262 -- macros y constantes
#define LIMITE_20262 20362
#define FACTOR_20262 3

int aplicar_limite20262(int valor) {
    if (valor > LIMITE_20262) return LIMITE_20262;
    return valor * FACTOR_20262;
}
