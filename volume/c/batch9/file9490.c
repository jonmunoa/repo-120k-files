// fichero 9490 -- macros y constantes
#define LIMITE_9490 9590
#define FACTOR_9490 1

int aplicar_limite9490(int valor) {
    if (valor > LIMITE_9490) return LIMITE_9490;
    return valor * FACTOR_9490;
}
