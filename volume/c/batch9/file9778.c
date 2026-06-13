// fichero 9778 -- macros y constantes
#define LIMITE_9778 9878
#define FACTOR_9778 4

int aplicar_limite9778(int valor) {
    if (valor > LIMITE_9778) return LIMITE_9778;
    return valor * FACTOR_9778;
}
