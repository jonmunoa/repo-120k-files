// fichero 35858 -- macros y constantes
#define LIMITE_35858 35958
#define FACTOR_35858 4

int aplicar_limite35858(int valor) {
    if (valor > LIMITE_35858) return LIMITE_35858;
    return valor * FACTOR_35858;
}
