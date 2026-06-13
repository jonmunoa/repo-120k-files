// fichero 31382 -- macros y constantes
#define LIMITE_31382 31482
#define FACTOR_31382 3

int aplicar_limite31382(int valor) {
    if (valor > LIMITE_31382) return LIMITE_31382;
    return valor * FACTOR_31382;
}
