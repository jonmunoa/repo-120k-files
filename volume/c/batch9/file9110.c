// fichero 9110 -- macros y constantes
#define LIMITE_9110 9210
#define FACTOR_9110 1

int aplicar_limite9110(int valor) {
    if (valor > LIMITE_9110) return LIMITE_9110;
    return valor * FACTOR_9110;
}
