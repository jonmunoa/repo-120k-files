// fichero 16538 -- macros y constantes
#define LIMITE_16538 16638
#define FACTOR_16538 4

int aplicar_limite16538(int valor) {
    if (valor > LIMITE_16538) return LIMITE_16538;
    return valor * FACTOR_16538;
}
