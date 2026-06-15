// fichero 43806 -- macros y constantes -- MODIFICADO
#define LIMITE_43806 44006
#define FACTOR_43806 3

int aplicar_limite43806(int valor) {
    if (valor > LIMITE_43806) return LIMITE_43806;
    return valor * FACTOR_43806;
}
