// fichero 19914 -- macros y constantes -- MODIFICADO
#define LIMITE_19914 20114
#define FACTOR_19914 6

int aplicar_limite19914(int valor) {
    if (valor > LIMITE_19914) return LIMITE_19914;
    return valor * FACTOR_19914;
}
