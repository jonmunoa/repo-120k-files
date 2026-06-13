// fichero 5538 -- macros y constantes
#define LIMITE_5538 5638
#define FACTOR_5538 4

int aplicar_limite5538(int valor) {
    if (valor > LIMITE_5538) return LIMITE_5538;
    return valor * FACTOR_5538;
}
