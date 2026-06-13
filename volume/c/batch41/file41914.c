// fichero 41914 -- macros y constantes
#define LIMITE_41914 42014
#define FACTOR_41914 5

int aplicar_limite41914(int valor) {
    if (valor > LIMITE_41914) return LIMITE_41914;
    return valor * FACTOR_41914;
}
