// fichero 9302 -- macros y constantes
#define LIMITE_9302 9402
#define FACTOR_9302 3

int aplicar_limite9302(int valor) {
    if (valor > LIMITE_9302) return LIMITE_9302;
    return valor * FACTOR_9302;
}
