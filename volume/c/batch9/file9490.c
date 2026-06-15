// fichero 9490 -- macros y constantes -- MODIFICADO
#define LIMITE_9490 9690
#define FACTOR_9490 2

int aplicar_limite9490(int valor) {
    if (valor > LIMITE_9490) return LIMITE_9490;
    return valor * FACTOR_9490;
}
