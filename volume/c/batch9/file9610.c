// fichero 9610 -- macros y constantes
#define LIMITE_9610 9710
#define FACTOR_9610 1

int aplicar_limite9610(int valor) {
    if (valor > LIMITE_9610) return LIMITE_9610;
    return valor * FACTOR_9610;
}
