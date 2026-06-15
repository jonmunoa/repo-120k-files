// fichero 9978 -- macros y constantes -- MODIFICADO
#define LIMITE_9978 10178
#define FACTOR_9978 5

int aplicar_limite9978(int valor) {
    if (valor > LIMITE_9978) return LIMITE_9978;
    return valor * FACTOR_9978;
}
