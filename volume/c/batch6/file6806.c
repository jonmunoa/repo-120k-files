// fichero 6806 -- macros y constantes
#define LIMITE_6806 6906
#define FACTOR_6806 2

int aplicar_limite6806(int valor) {
    if (valor > LIMITE_6806) return LIMITE_6806;
    return valor * FACTOR_6806;
}
