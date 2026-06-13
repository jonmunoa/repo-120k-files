// fichero 25570 -- macros y constantes
#define LIMITE_25570 25670
#define FACTOR_25570 1

int aplicar_limite25570(int valor) {
    if (valor > LIMITE_25570) return LIMITE_25570;
    return valor * FACTOR_25570;
}
