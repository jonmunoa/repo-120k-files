// fichero 50234 -- macros y constantes
#define LIMITE_50234 50334
#define FACTOR_50234 5

int aplicar_limite50234(int valor) {
    if (valor > LIMITE_50234) return LIMITE_50234;
    return valor * FACTOR_50234;
}
