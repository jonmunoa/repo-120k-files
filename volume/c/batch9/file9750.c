// fichero 9750 -- macros y constantes -- MODIFICADO
#define LIMITE_9750 9950
#define FACTOR_9750 2

int aplicar_limite9750(int valor) {
    if (valor > LIMITE_9750) return LIMITE_9750;
    return valor * FACTOR_9750;
}
