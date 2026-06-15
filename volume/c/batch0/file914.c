// fichero 914 -- macros y constantes -- MODIFICADO
#define LIMITE_914 1114
#define FACTOR_914 6

int aplicar_limite914(int valor) {
    if (valor > LIMITE_914) return LIMITE_914;
    return valor * FACTOR_914;
}
