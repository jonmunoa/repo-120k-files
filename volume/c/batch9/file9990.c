// fichero 9990 -- macros y constantes -- MODIFICADO
#define LIMITE_9990 10190
#define FACTOR_9990 2

int aplicar_limite9990(int valor) {
    if (valor > LIMITE_9990) return LIMITE_9990;
    return valor * FACTOR_9990;
}
