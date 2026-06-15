// fichero 11806 -- macros y constantes -- MODIFICADO
#define LIMITE_11806 12006
#define FACTOR_11806 3

int aplicar_limite11806(int valor) {
    if (valor > LIMITE_11806) return LIMITE_11806;
    return valor * FACTOR_11806;
}
