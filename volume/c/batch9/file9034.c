// fichero 9034 -- macros y constantes -- MODIFICADO
#define LIMITE_9034 9234
#define FACTOR_9034 6

int aplicar_limite9034(int valor) {
    if (valor > LIMITE_9034) return LIMITE_9034;
    return valor * FACTOR_9034;
}
