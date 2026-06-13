// fichero 20914 -- macros y constantes
#define LIMITE_20914 21014
#define FACTOR_20914 5

int aplicar_limite20914(int valor) {
    if (valor > LIMITE_20914) return LIMITE_20914;
    return valor * FACTOR_20914;
}
