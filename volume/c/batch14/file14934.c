// fichero 14934 -- macros y constantes
#define LIMITE_14934 15034
#define FACTOR_14934 5

int aplicar_limite14934(int valor) {
    if (valor > LIMITE_14934) return LIMITE_14934;
    return valor * FACTOR_14934;
}
