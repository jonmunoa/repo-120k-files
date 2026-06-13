// fichero 9898 -- macros y constantes
#define LIMITE_9898 9998
#define FACTOR_9898 4

int aplicar_limite9898(int valor) {
    if (valor > LIMITE_9898) return LIMITE_9898;
    return valor * FACTOR_9898;
}
