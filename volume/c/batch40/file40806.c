// fichero 40806 -- macros y constantes -- MODIFICADO
#define LIMITE_40806 41006
#define FACTOR_40806 3

int aplicar_limite40806(int valor) {
    if (valor > LIMITE_40806) return LIMITE_40806;
    return valor * FACTOR_40806;
}
