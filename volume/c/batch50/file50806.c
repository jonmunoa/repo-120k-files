// fichero 50806 -- macros y constantes
#define LIMITE_50806 50906
#define FACTOR_50806 2

int aplicar_limite50806(int valor) {
    if (valor > LIMITE_50806) return LIMITE_50806;
    return valor * FACTOR_50806;
}
