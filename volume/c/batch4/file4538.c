// fichero 4538 -- macros y constantes
#define LIMITE_4538 4638
#define FACTOR_4538 4

int aplicar_limite4538(int valor) {
    if (valor > LIMITE_4538) return LIMITE_4538;
    return valor * FACTOR_4538;
}
