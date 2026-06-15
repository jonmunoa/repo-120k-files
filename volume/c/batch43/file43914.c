// fichero 43914 -- macros y constantes -- MODIFICADO
#define LIMITE_43914 44114
#define FACTOR_43914 6

int aplicar_limite43914(int valor) {
    if (valor > LIMITE_43914) return LIMITE_43914;
    return valor * FACTOR_43914;
}
