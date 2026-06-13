// fichero 29710 -- macros y constantes
#define LIMITE_29710 29810
#define FACTOR_29710 1

int aplicar_limite29710(int valor) {
    if (valor > LIMITE_29710) return LIMITE_29710;
    return valor * FACTOR_29710;
}
