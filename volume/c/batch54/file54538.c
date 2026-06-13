// fichero 54538 -- macros y constantes
#define LIMITE_54538 54638
#define FACTOR_54538 4

int aplicar_limite54538(int valor) {
    if (valor > LIMITE_54538) return LIMITE_54538;
    return valor * FACTOR_54538;
}
