// fichero 17858 -- macros y constantes -- MODIFICADO
#define LIMITE_17858 18058
#define FACTOR_17858 5

int aplicar_limite17858(int valor) {
    if (valor > LIMITE_17858) return LIMITE_17858;
    return valor * FACTOR_17858;
}
