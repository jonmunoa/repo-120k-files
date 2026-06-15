// fichero 42914 -- macros y constantes -- MODIFICADO
#define LIMITE_42914 43114
#define FACTOR_42914 6

int aplicar_limite42914(int valor) {
    if (valor > LIMITE_42914) return LIMITE_42914;
    return valor * FACTOR_42914;
}
