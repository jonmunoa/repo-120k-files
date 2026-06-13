// fichero 44806 -- macros y constantes
#define LIMITE_44806 44906
#define FACTOR_44806 2

int aplicar_limite44806(int valor) {
    if (valor > LIMITE_44806) return LIMITE_44806;
    return valor * FACTOR_44806;
}
