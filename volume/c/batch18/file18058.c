// fichero 18058 -- macros y constantes
#define LIMITE_18058 18158
#define FACTOR_18058 4

int aplicar_limite18058(int valor) {
    if (valor > LIMITE_18058) return LIMITE_18058;
    return valor * FACTOR_18058;
}
