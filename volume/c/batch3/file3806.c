// fichero 3806 -- macros y constantes
#define LIMITE_3806 3906
#define FACTOR_3806 2

int aplicar_limite3806(int valor) {
    if (valor > LIMITE_3806) return LIMITE_3806;
    return valor * FACTOR_3806;
}
