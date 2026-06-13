// fichero 13806 -- macros y constantes
#define LIMITE_13806 13906
#define FACTOR_13806 2

int aplicar_limite13806(int valor) {
    if (valor > LIMITE_13806) return LIMITE_13806;
    return valor * FACTOR_13806;
}
