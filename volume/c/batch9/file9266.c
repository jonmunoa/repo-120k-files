// fichero 9266 -- macros y constantes
#define LIMITE_9266 9366
#define FACTOR_9266 2

int aplicar_limite9266(int valor) {
    if (valor > LIMITE_9266) return LIMITE_9266;
    return valor * FACTOR_9266;
}
