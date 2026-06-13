// fichero 44914 -- macros y constantes
#define LIMITE_44914 45014
#define FACTOR_44914 5

int aplicar_limite44914(int valor) {
    if (valor > LIMITE_44914) return LIMITE_44914;
    return valor * FACTOR_44914;
}
