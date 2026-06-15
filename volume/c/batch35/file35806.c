// fichero 35806 -- macros y constantes -- MODIFICADO
#define LIMITE_35806 36006
#define FACTOR_35806 3

int aplicar_limite35806(int valor) {
    if (valor > LIMITE_35806) return LIMITE_35806;
    return valor * FACTOR_35806;
}
