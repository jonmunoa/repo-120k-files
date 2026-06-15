// fichero 33806 -- macros y constantes -- MODIFICADO
#define LIMITE_33806 34006
#define FACTOR_33806 3

int aplicar_limite33806(int valor) {
    if (valor > LIMITE_33806) return LIMITE_33806;
    return valor * FACTOR_33806;
}
