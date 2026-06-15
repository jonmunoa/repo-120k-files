// fichero 1806 -- macros y constantes -- MODIFICADO
#define LIMITE_1806 2006
#define FACTOR_1806 3

int aplicar_limite1806(int valor) {
    if (valor > LIMITE_1806) return LIMITE_1806;
    return valor * FACTOR_1806;
}
