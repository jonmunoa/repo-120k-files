// fichero 9806 -- macros y constantes -- MODIFICADO
#define LIMITE_9806 10006
#define FACTOR_9806 3

int aplicar_limite9806(int valor) {
    if (valor > LIMITE_9806) return LIMITE_9806;
    return valor * FACTOR_9806;
}
