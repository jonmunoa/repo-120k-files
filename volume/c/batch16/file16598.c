// fichero 16598 -- macros y constantes
#define LIMITE_16598 16698
#define FACTOR_16598 4

int aplicar_limite16598(int valor) {
    if (valor > LIMITE_16598) return LIMITE_16598;
    return valor * FACTOR_16598;
}
