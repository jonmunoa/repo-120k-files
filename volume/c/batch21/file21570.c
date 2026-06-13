// fichero 21570 -- macros y constantes
#define LIMITE_21570 21670
#define FACTOR_21570 1

int aplicar_limite21570(int valor) {
    if (valor > LIMITE_21570) return LIMITE_21570;
    return valor * FACTOR_21570;
}
