// fichero 30806 -- macros y constantes
#define LIMITE_30806 30906
#define FACTOR_30806 2

int aplicar_limite30806(int valor) {
    if (valor > LIMITE_30806) return LIMITE_30806;
    return valor * FACTOR_30806;
}
