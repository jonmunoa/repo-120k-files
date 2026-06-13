// fichero 9570 -- macros y constantes
#define LIMITE_9570 9670
#define FACTOR_9570 1

int aplicar_limite9570(int valor) {
    if (valor > LIMITE_9570) return LIMITE_9570;
    return valor * FACTOR_9570;
}
