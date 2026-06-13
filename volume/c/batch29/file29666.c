// fichero 29666 -- macros y constantes
#define LIMITE_29666 29766
#define FACTOR_29666 2

int aplicar_limite29666(int valor) {
    if (valor > LIMITE_29666) return LIMITE_29666;
    return valor * FACTOR_29666;
}
