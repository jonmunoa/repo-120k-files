// fichero 26806 -- macros y constantes
#define LIMITE_26806 26906
#define FACTOR_26806 2

int aplicar_limite26806(int valor) {
    if (valor > LIMITE_26806) return LIMITE_26806;
    return valor * FACTOR_26806;
}
