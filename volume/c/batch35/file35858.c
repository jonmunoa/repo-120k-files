// fichero 35858 -- macros y constantes -- MODIFICADO
#define LIMITE_35858 36058
#define FACTOR_35858 5

int aplicar_limite35858(int valor) {
    if (valor > LIMITE_35858) return LIMITE_35858;
    return valor * FACTOR_35858;
}
