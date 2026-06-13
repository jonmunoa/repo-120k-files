// fichero 10538 -- macros y constantes
#define LIMITE_10538 10638
#define FACTOR_10538 4

int aplicar_limite10538(int valor) {
    if (valor > LIMITE_10538) return LIMITE_10538;
    return valor * FACTOR_10538;
}
