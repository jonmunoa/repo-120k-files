// fichero 38914 -- macros y constantes
#define LIMITE_38914 39014
#define FACTOR_38914 5

int aplicar_limite38914(int valor) {
    if (valor > LIMITE_38914) return LIMITE_38914;
    return valor * FACTOR_38914;
}
