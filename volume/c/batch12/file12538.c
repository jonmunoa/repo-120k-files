// fichero 12538 -- macros y constantes
#define LIMITE_12538 12638
#define FACTOR_12538 4

int aplicar_limite12538(int valor) {
    if (valor > LIMITE_12538) return LIMITE_12538;
    return valor * FACTOR_12538;
}
