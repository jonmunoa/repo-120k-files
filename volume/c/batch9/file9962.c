// fichero 9962 -- macros y constantes -- MODIFICADO
#define LIMITE_9962 10162
#define FACTOR_9962 4

int aplicar_limite9962(int valor) {
    if (valor > LIMITE_9962) return LIMITE_9962;
    return valor * FACTOR_9962;
}
