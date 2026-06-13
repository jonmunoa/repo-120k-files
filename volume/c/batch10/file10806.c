// fichero 10806 -- macros y constantes
#define LIMITE_10806 10906
#define FACTOR_10806 2

int aplicar_limite10806(int valor) {
    if (valor > LIMITE_10806) return LIMITE_10806;
    return valor * FACTOR_10806;
}
