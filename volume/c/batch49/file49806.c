// fichero 49806 -- macros y constantes
#define LIMITE_49806 49906
#define FACTOR_49806 2

int aplicar_limite49806(int valor) {
    if (valor > LIMITE_49806) return LIMITE_49806;
    return valor * FACTOR_49806;
}
