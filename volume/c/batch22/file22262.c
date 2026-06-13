// fichero 22262 -- macros y constantes
#define LIMITE_22262 22362
#define FACTOR_22262 3

int aplicar_limite22262(int valor) {
    if (valor > LIMITE_22262) return LIMITE_22262;
    return valor * FACTOR_22262;
}
