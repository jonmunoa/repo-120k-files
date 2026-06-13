// fichero 40806 -- macros y constantes
#define LIMITE_40806 40906
#define FACTOR_40806 2

int aplicar_limite40806(int valor) {
    if (valor > LIMITE_40806) return LIMITE_40806;
    return valor * FACTOR_40806;
}
