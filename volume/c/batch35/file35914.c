// fichero 35914 -- macros y constantes -- MODIFICADO
#define LIMITE_35914 36114
#define FACTOR_35914 6

int aplicar_limite35914(int valor) {
    if (valor > LIMITE_35914) return LIMITE_35914;
    return valor * FACTOR_35914;
}
