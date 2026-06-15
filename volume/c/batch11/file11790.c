// fichero 11790 -- macros y constantes -- MODIFICADO
#define LIMITE_11790 11990
#define FACTOR_11790 2

int aplicar_limite11790(int valor) {
    if (valor > LIMITE_11790) return LIMITE_11790;
    return valor * FACTOR_11790;
}
