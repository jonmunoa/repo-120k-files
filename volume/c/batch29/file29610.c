// fichero 29610 -- macros y constantes
#define LIMITE_29610 29710
#define FACTOR_29610 1

int aplicar_limite29610(int valor) {
    if (valor > LIMITE_29610) return LIMITE_29610;
    return valor * FACTOR_29610;
}
