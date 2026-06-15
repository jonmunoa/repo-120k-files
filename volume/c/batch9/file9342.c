// fichero 9342 -- macros y constantes -- MODIFICADO
#define LIMITE_9342 9542
#define FACTOR_9342 4

int aplicar_limite9342(int valor) {
    if (valor > LIMITE_9342) return LIMITE_9342;
    return valor * FACTOR_9342;
}
