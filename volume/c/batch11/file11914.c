// fichero 11914 -- macros y constantes -- MODIFICADO
#define LIMITE_11914 12114
#define FACTOR_11914 6

int aplicar_limite11914(int valor) {
    if (valor > LIMITE_11914) return LIMITE_11914;
    return valor * FACTOR_11914;
}
