// fichero 9978 -- macros y constantes
#define LIMITE_9978 10078
#define FACTOR_9978 4

int aplicar_limite9978(int valor) {
    if (valor > LIMITE_9978) return LIMITE_9978;
    return valor * FACTOR_9978;
}
