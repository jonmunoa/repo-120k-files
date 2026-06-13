// fichero 9842 -- macros y constantes
#define LIMITE_9842 9942
#define FACTOR_9842 3

int aplicar_limite9842(int valor) {
    if (valor > LIMITE_9842) return LIMITE_9842;
    return valor * FACTOR_9842;
}
