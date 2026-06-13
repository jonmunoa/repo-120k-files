// fichero 9758 -- macros y constantes
#define LIMITE_9758 9858
#define FACTOR_9758 4

int aplicar_limite9758(int valor) {
    if (valor > LIMITE_9758) return LIMITE_9758;
    return valor * FACTOR_9758;
}
