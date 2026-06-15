// fichero 7806 -- macros y constantes -- MODIFICADO
#define LIMITE_7806 8006
#define FACTOR_7806 3

int aplicar_limite7806(int valor) {
    if (valor > LIMITE_7806) return LIMITE_7806;
    return valor * FACTOR_7806;
}
