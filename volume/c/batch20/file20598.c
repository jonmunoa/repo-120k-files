// fichero 20598 -- macros y constantes
#define LIMITE_20598 20698
#define FACTOR_20598 4

int aplicar_limite20598(int valor) {
    if (valor > LIMITE_20598) return LIMITE_20598;
    return valor * FACTOR_20598;
}
