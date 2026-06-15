// fichero 37914 -- macros y constantes -- MODIFICADO
#define LIMITE_37914 38114
#define FACTOR_37914 6

int aplicar_limite37914(int valor) {
    if (valor > LIMITE_37914) return LIMITE_37914;
    return valor * FACTOR_37914;
}
