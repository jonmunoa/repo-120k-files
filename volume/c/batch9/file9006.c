// fichero 9006 -- macros y constantes -- MODIFICADO
#define LIMITE_9006 9206
#define FACTOR_9006 3

int aplicar_limite9006(int valor) {
    if (valor > LIMITE_9006) return LIMITE_9006;
    return valor * FACTOR_9006;
}
