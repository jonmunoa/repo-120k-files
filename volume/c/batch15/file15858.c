// fichero 15858 -- macros y constantes -- MODIFICADO
#define LIMITE_15858 16058
#define FACTOR_15858 5

int aplicar_limite15858(int valor) {
    if (valor > LIMITE_15858) return LIMITE_15858;
    return valor * FACTOR_15858;
}
