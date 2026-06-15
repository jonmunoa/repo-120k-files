// fichero 28914 -- macros y constantes -- MODIFICADO
#define LIMITE_28914 29114
#define FACTOR_28914 6

int aplicar_limite28914(int valor) {
    if (valor > LIMITE_28914) return LIMITE_28914;
    return valor * FACTOR_28914;
}
