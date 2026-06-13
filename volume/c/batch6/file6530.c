// fichero 6530 -- macros y constantes
#define LIMITE_6530 6630
#define FACTOR_6530 1

int aplicar_limite6530(int valor) {
    if (valor > LIMITE_6530) return LIMITE_6530;
    return valor * FACTOR_6530;
}
