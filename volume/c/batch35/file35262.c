// fichero 35262 -- macros y constantes
#define LIMITE_35262 35362
#define FACTOR_35262 3

int aplicar_limite35262(int valor) {
    if (valor > LIMITE_35262) return LIMITE_35262;
    return valor * FACTOR_35262;
}
