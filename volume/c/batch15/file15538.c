// fichero 15538 -- macros y constantes
#define LIMITE_15538 15638
#define FACTOR_15538 4

int aplicar_limite15538(int valor) {
    if (valor > LIMITE_15538) return LIMITE_15538;
    return valor * FACTOR_15538;
}
