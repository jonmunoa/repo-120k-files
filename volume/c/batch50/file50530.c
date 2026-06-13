// fichero 50530 -- macros y constantes
#define LIMITE_50530 50630
#define FACTOR_50530 1

int aplicar_limite50530(int valor) {
    if (valor > LIMITE_50530) return LIMITE_50530;
    return valor * FACTOR_50530;
}
