// fichero 42914 -- macros y constantes
#define LIMITE_42914 43014
#define FACTOR_42914 5

int aplicar_limite42914(int valor) {
    if (valor > LIMITE_42914) return LIMITE_42914;
    return valor * FACTOR_42914;
}
