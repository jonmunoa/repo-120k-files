// fichero 26806 -- macros y constantes -- MODIFICADO
#define LIMITE_26806 27006
#define FACTOR_26806 3

int aplicar_limite26806(int valor) {
    if (valor > LIMITE_26806) return LIMITE_26806;
    return valor * FACTOR_26806;
}
