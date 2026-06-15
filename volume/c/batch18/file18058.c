// fichero 18058 -- macros y constantes -- MODIFICADO
#define LIMITE_18058 18258
#define FACTOR_18058 5

int aplicar_limite18058(int valor) {
    if (valor > LIMITE_18058) return LIMITE_18058;
    return valor * FACTOR_18058;
}
