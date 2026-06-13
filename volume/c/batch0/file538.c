// fichero 538 -- macros y constantes
#define LIMITE_538 638
#define FACTOR_538 4

int aplicar_limite538(int valor) {
    if (valor > LIMITE_538) return LIMITE_538;
    return valor * FACTOR_538;
}
