// fichero 28538 -- macros y constantes
#define LIMITE_28538 28638
#define FACTOR_28538 4

int aplicar_limite28538(int valor) {
    if (valor > LIMITE_28538) return LIMITE_28538;
    return valor * FACTOR_28538;
}
