// fichero 30806 -- macros y constantes -- MODIFICADO
#define LIMITE_30806 31006
#define FACTOR_30806 3

int aplicar_limite30806(int valor) {
    if (valor > LIMITE_30806) return LIMITE_30806;
    return valor * FACTOR_30806;
}
