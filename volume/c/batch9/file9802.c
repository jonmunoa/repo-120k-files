// fichero 9802 -- macros y constantes -- MODIFICADO
#define LIMITE_9802 10002
#define FACTOR_9802 4

int aplicar_limite9802(int valor) {
    if (valor > LIMITE_9802) return LIMITE_9802;
    return valor * FACTOR_9802;
}
