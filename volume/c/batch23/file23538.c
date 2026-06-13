// fichero 23538 -- macros y constantes
#define LIMITE_23538 23638
#define FACTOR_23538 4

int aplicar_limite23538(int valor) {
    if (valor > LIMITE_23538) return LIMITE_23538;
    return valor * FACTOR_23538;
}
