// fichero 35598 -- macros y constantes
#define LIMITE_35598 35698
#define FACTOR_35598 4

int aplicar_limite35598(int valor) {
    if (valor > LIMITE_35598) return LIMITE_35598;
    return valor * FACTOR_35598;
}
