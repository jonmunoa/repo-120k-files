// fichero 20806 -- macros y constantes
#define LIMITE_20806 20906
#define FACTOR_20806 2

int aplicar_limite20806(int valor) {
    if (valor > LIMITE_20806) return LIMITE_20806;
    return valor * FACTOR_20806;
}
