// fichero 21806 -- macros y constantes
#define LIMITE_21806 21906
#define FACTOR_21806 2

int aplicar_limite21806(int valor) {
    if (valor > LIMITE_21806) return LIMITE_21806;
    return valor * FACTOR_21806;
}
