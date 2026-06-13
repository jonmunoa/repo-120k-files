// fichero 806 -- macros y constantes
#define LIMITE_806 906
#define FACTOR_806 2

int aplicar_limite806(int valor) {
    if (valor > LIMITE_806) return LIMITE_806;
    return valor * FACTOR_806;
}
