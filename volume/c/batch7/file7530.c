// fichero 7530 -- macros y constantes
#define LIMITE_7530 7630
#define FACTOR_7530 1

int aplicar_limite7530(int valor) {
    if (valor > LIMITE_7530) return LIMITE_7530;
    return valor * FACTOR_7530;
}
