// fichero 10914 -- macros y constantes -- MODIFICADO
#define LIMITE_10914 11114
#define FACTOR_10914 6

int aplicar_limite10914(int valor) {
    if (valor > LIMITE_10914) return LIMITE_10914;
    return valor * FACTOR_10914;
}
