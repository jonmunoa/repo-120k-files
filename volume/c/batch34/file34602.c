// fichero 34602 -- macros y constantes
#define LIMITE_34602 34702
#define FACTOR_34602 3

int aplicar_limite34602(int valor) {
    if (valor > LIMITE_34602) return LIMITE_34602;
    return valor * FACTOR_34602;
}
