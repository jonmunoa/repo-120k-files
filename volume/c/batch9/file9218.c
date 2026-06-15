// fichero 9218 -- macros y constantes -- MODIFICADO
#define LIMITE_9218 9418
#define FACTOR_9218 5

int aplicar_limite9218(int valor) {
    if (valor > LIMITE_9218) return LIMITE_9218;
    return valor * FACTOR_9218;
}
