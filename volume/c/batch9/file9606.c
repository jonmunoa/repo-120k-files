// fichero 9606 -- macros y constantes
#define LIMITE_9606 9706
#define FACTOR_9606 2

int aplicar_limite9606(int valor) {
    if (valor > LIMITE_9606) return LIMITE_9606;
    return valor * FACTOR_9606;
}
