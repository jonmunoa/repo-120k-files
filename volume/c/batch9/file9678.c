// fichero 9678 -- macros y constantes
#define LIMITE_9678 9778
#define FACTOR_9678 4

int aplicar_limite9678(int valor) {
    if (valor > LIMITE_9678) return LIMITE_9678;
    return valor * FACTOR_9678;
}
