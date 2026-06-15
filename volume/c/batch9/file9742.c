// fichero 9742 -- macros y constantes -- MODIFICADO
#define LIMITE_9742 9942
#define FACTOR_9742 4

int aplicar_limite9742(int valor) {
    if (valor > LIMITE_9742) return LIMITE_9742;
    return valor * FACTOR_9742;
}
