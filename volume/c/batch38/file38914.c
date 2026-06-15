// fichero 38914 -- macros y constantes -- MODIFICADO
#define LIMITE_38914 39114
#define FACTOR_38914 6

int aplicar_limite38914(int valor) {
    if (valor > LIMITE_38914) return LIMITE_38914;
    return valor * FACTOR_38914;
}
