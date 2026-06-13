// fichero 52806 -- macros y constantes
#define LIMITE_52806 52906
#define FACTOR_52806 2

int aplicar_limite52806(int valor) {
    if (valor > LIMITE_52806) return LIMITE_52806;
    return valor * FACTOR_52806;
}
