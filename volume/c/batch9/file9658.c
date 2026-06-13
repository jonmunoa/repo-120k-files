// fichero 9658 -- macros y constantes
#define LIMITE_9658 9758
#define FACTOR_9658 4

int aplicar_limite9658(int valor) {
    if (valor > LIMITE_9658) return LIMITE_9658;
    return valor * FACTOR_9658;
}
