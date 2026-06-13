// fichero 43914 -- macros y constantes
#define LIMITE_43914 44014
#define FACTOR_43914 5

int aplicar_limite43914(int valor) {
    if (valor > LIMITE_43914) return LIMITE_43914;
    return valor * FACTOR_43914;
}
