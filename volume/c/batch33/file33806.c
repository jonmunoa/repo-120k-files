// fichero 33806 -- macros y constantes
#define LIMITE_33806 33906
#define FACTOR_33806 2

int aplicar_limite33806(int valor) {
    if (valor > LIMITE_33806) return LIMITE_33806;
    return valor * FACTOR_33806;
}
