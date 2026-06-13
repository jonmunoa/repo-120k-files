// fichero 22570 -- macros y constantes
#define LIMITE_22570 22670
#define FACTOR_22570 1

int aplicar_limite22570(int valor) {
    if (valor > LIMITE_22570) return LIMITE_22570;
    return valor * FACTOR_22570;
}
