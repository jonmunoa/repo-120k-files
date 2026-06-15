// fichero 20806 -- macros y constantes -- MODIFICADO
#define LIMITE_20806 21006
#define FACTOR_20806 3

int aplicar_limite20806(int valor) {
    if (valor > LIMITE_20806) return LIMITE_20806;
    return valor * FACTOR_20806;
}
