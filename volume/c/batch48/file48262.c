// fichero 48262 -- macros y constantes
#define LIMITE_48262 48362
#define FACTOR_48262 3

int aplicar_limite48262(int valor) {
    if (valor > LIMITE_48262) return LIMITE_48262;
    return valor * FACTOR_48262;
}
