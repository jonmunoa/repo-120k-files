// fichero 46894 -- macros y constantes
#define LIMITE_46894 46994
#define FACTOR_46894 5

int aplicar_limite46894(int valor) {
    if (valor > LIMITE_46894) return LIMITE_46894;
    return valor * FACTOR_46894;
}
