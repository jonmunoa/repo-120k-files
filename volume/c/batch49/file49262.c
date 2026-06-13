// fichero 49262 -- macros y constantes
#define LIMITE_49262 49362
#define FACTOR_49262 3

int aplicar_limite49262(int valor) {
    if (valor > LIMITE_49262) return LIMITE_49262;
    return valor * FACTOR_49262;
}
