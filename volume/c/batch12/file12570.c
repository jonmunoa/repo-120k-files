// fichero 12570 -- macros y constantes
#define LIMITE_12570 12670
#define FACTOR_12570 1

int aplicar_limite12570(int valor) {
    if (valor > LIMITE_12570) return LIMITE_12570;
    return valor * FACTOR_12570;
}
