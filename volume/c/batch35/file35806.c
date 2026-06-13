// fichero 35806 -- macros y constantes
#define LIMITE_35806 35906
#define FACTOR_35806 2

int aplicar_limite35806(int valor) {
    if (valor > LIMITE_35806) return LIMITE_35806;
    return valor * FACTOR_35806;
}
