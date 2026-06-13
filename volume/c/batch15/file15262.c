// fichero 15262 -- macros y constantes
#define LIMITE_15262 15362
#define FACTOR_15262 3

int aplicar_limite15262(int valor) {
    if (valor > LIMITE_15262) return LIMITE_15262;
    return valor * FACTOR_15262;
}
