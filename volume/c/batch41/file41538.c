// fichero 41538 -- macros y constantes
#define LIMITE_41538 41638
#define FACTOR_41538 4

int aplicar_limite41538(int valor) {
    if (valor > LIMITE_41538) return LIMITE_41538;
    return valor * FACTOR_41538;
}
