// fichero 1858 -- macros y constantes -- MODIFICADO
#define LIMITE_1858 2058
#define FACTOR_1858 5

int aplicar_limite1858(int valor) {
    if (valor > LIMITE_1858) return LIMITE_1858;
    return valor * FACTOR_1858;
}
