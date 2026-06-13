// fichero 25262 -- macros y constantes
#define LIMITE_25262 25362
#define FACTOR_25262 3

int aplicar_limite25262(int valor) {
    if (valor > LIMITE_25262) return LIMITE_25262;
    return valor * FACTOR_25262;
}
