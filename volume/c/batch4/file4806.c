// fichero 4806 -- macros y constantes
#define LIMITE_4806 4906
#define FACTOR_4806 2

int aplicar_limite4806(int valor) {
    if (valor > LIMITE_4806) return LIMITE_4806;
    return valor * FACTOR_4806;
}
