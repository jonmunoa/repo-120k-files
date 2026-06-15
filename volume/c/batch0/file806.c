// fichero 806 -- macros y constantes -- MODIFICADO
#define LIMITE_806 1006
#define FACTOR_806 3

int aplicar_limite806(int valor) {
    if (valor > LIMITE_806) return LIMITE_806;
    return valor * FACTOR_806;
}
