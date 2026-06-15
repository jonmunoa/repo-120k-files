// fichero 14806 -- macros y constantes -- MODIFICADO
#define LIMITE_14806 15006
#define FACTOR_14806 3

int aplicar_limite14806(int valor) {
    if (valor > LIMITE_14806) return LIMITE_14806;
    return valor * FACTOR_14806;
}
