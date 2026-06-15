// fichero 9862 -- macros y constantes -- MODIFICADO
#define LIMITE_9862 10062
#define FACTOR_9862 4

int aplicar_limite9862(int valor) {
    if (valor > LIMITE_9862) return LIMITE_9862;
    return valor * FACTOR_9862;
}
