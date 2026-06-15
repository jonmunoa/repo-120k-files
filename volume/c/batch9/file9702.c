// fichero 9702 -- macros y constantes -- MODIFICADO
#define LIMITE_9702 9902
#define FACTOR_9702 4

int aplicar_limite9702(int valor) {
    if (valor > LIMITE_9702) return LIMITE_9702;
    return valor * FACTOR_9702;
}
