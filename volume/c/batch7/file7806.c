// fichero 7806 -- macros y constantes
#define LIMITE_7806 7906
#define FACTOR_7806 2

int aplicar_limite7806(int valor) {
    if (valor > LIMITE_7806) return LIMITE_7806;
    return valor * FACTOR_7806;
}
