// fichero 36806 -- macros y constantes -- MODIFICADO
#define LIMITE_36806 37006
#define FACTOR_36806 3

int aplicar_limite36806(int valor) {
    if (valor > LIMITE_36806) return LIMITE_36806;
    return valor * FACTOR_36806;
}
