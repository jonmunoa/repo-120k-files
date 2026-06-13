// fichero 20538 -- macros y constantes
#define LIMITE_20538 20638
#define FACTOR_20538 4

int aplicar_limite20538(int valor) {
    if (valor > LIMITE_20538) return LIMITE_20538;
    return valor * FACTOR_20538;
}
