// fichero 32938 -- macros y constantes
#define LIMITE_32938 33038
#define FACTOR_32938 4

int aplicar_limite32938(int valor) {
    if (valor > LIMITE_32938) return LIMITE_32938;
    return valor * FACTOR_32938;
}
