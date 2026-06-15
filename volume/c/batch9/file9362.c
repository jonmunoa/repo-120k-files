// fichero 9362 -- macros y constantes -- MODIFICADO
#define LIMITE_9362 9562
#define FACTOR_9362 4

int aplicar_limite9362(int valor) {
    if (valor > LIMITE_9362) return LIMITE_9362;
    return valor * FACTOR_9362;
}
