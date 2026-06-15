// fichero 39914 -- macros y constantes -- MODIFICADO
#define LIMITE_39914 40114
#define FACTOR_39914 6

int aplicar_limite39914(int valor) {
    if (valor > LIMITE_39914) return LIMITE_39914;
    return valor * FACTOR_39914;
}
