// fichero 23858 -- macros y constantes
#define LIMITE_23858 23958
#define FACTOR_23858 4

int aplicar_limite23858(int valor) {
    if (valor > LIMITE_23858) return LIMITE_23858;
    return valor * FACTOR_23858;
}
