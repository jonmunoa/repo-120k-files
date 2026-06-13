// fichero 15858 -- macros y constantes
#define LIMITE_15858 15958
#define FACTOR_15858 4

int aplicar_limite15858(int valor) {
    if (valor > LIMITE_15858) return LIMITE_15858;
    return valor * FACTOR_15858;
}
