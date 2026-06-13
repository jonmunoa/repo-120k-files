// fichero 17806 -- macros y constantes
#define LIMITE_17806 17906
#define FACTOR_17806 2

int aplicar_limite17806(int valor) {
    if (valor > LIMITE_17806) return LIMITE_17806;
    return valor * FACTOR_17806;
}
