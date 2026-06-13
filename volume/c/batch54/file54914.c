// fichero 54914 -- macros y constantes
#define LIMITE_54914 55014
#define FACTOR_54914 5

int aplicar_limite54914(int valor) {
    if (valor > LIMITE_54914) return LIMITE_54914;
    return valor * FACTOR_54914;
}
