// fichero 7262 -- macros y constantes
#define LIMITE_7262 7362
#define FACTOR_7262 3

int aplicar_limite7262(int valor) {
    if (valor > LIMITE_7262) return LIMITE_7262;
    return valor * FACTOR_7262;
}
