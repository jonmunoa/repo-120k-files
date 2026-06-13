// fichero 12262 -- macros y constantes
#define LIMITE_12262 12362
#define FACTOR_12262 3

int aplicar_limite12262(int valor) {
    if (valor > LIMITE_12262) return LIMITE_12262;
    return valor * FACTOR_12262;
}
