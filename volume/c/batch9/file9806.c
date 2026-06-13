// fichero 9806 -- macros y constantes
#define LIMITE_9806 9906
#define FACTOR_9806 2

int aplicar_limite9806(int valor) {
    if (valor > LIMITE_9806) return LIMITE_9806;
    return valor * FACTOR_9806;
}
