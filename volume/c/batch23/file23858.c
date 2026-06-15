// fichero 23858 -- macros y constantes -- MODIFICADO
#define LIMITE_23858 24058
#define FACTOR_23858 5

int aplicar_limite23858(int valor) {
    if (valor > LIMITE_23858) return LIMITE_23858;
    return valor * FACTOR_23858;
}
