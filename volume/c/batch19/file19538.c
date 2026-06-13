// fichero 19538 -- macros y constantes
#define LIMITE_19538 19638
#define FACTOR_19538 4

int aplicar_limite19538(int valor) {
    if (valor > LIMITE_19538) return LIMITE_19538;
    return valor * FACTOR_19538;
}
