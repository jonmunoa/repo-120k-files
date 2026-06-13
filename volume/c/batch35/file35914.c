// fichero 35914 -- macros y constantes
#define LIMITE_35914 36014
#define FACTOR_35914 5

int aplicar_limite35914(int valor) {
    if (valor > LIMITE_35914) return LIMITE_35914;
    return valor * FACTOR_35914;
}
