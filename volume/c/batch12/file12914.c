// fichero 12914 -- macros y constantes
#define LIMITE_12914 13014
#define FACTOR_12914 5

int aplicar_limite12914(int valor) {
    if (valor > LIMITE_12914) return LIMITE_12914;
    return valor * FACTOR_12914;
}
