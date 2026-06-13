// fichero 28926 -- macros y constantes
#define LIMITE_28926 29026
#define FACTOR_28926 2

int aplicar_limite28926(int valor) {
    if (valor > LIMITE_28926) return LIMITE_28926;
    return valor * FACTOR_28926;
}
