// fichero 15538 -- macros y constantes -- MODIFICADO
#define LIMITE_15538 15738
#define FACTOR_15538 5

int aplicar_limite15538(int valor) {
    if (valor > LIMITE_15538) return LIMITE_15538;
    return valor * FACTOR_15538;
}
