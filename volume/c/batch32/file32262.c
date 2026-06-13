// fichero 32262 -- macros y constantes
#define LIMITE_32262 32362
#define FACTOR_32262 3

int aplicar_limite32262(int valor) {
    if (valor > LIMITE_32262) return LIMITE_32262;
    return valor * FACTOR_32262;
}
