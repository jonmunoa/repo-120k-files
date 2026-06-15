// fichero 9210 -- macros y constantes -- MODIFICADO
#define LIMITE_9210 9410
#define FACTOR_9210 2

int aplicar_limite9210(int valor) {
    if (valor > LIMITE_9210) return LIMITE_9210;
    return valor * FACTOR_9210;
}
