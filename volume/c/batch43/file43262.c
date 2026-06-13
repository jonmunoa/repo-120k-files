// fichero 43262 -- macros y constantes
#define LIMITE_43262 43362
#define FACTOR_43262 3

int aplicar_limite43262(int valor) {
    if (valor > LIMITE_43262) return LIMITE_43262;
    return valor * FACTOR_43262;
}
