// fichero 8806 -- macros y constantes
#define LIMITE_8806 8906
#define FACTOR_8806 2

int aplicar_limite8806(int valor) {
    if (valor > LIMITE_8806) return LIMITE_8806;
    return valor * FACTOR_8806;
}
