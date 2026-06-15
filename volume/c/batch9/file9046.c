// fichero 9046 -- macros y constantes -- MODIFICADO
#define LIMITE_9046 9246
#define FACTOR_9046 3

int aplicar_limite9046(int valor) {
    if (valor > LIMITE_9046) return LIMITE_9046;
    return valor * FACTOR_9046;
}
