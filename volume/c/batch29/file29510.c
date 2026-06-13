// fichero 29510 -- macros y constantes
#define LIMITE_29510 29610
#define FACTOR_29510 1

int aplicar_limite29510(int valor) {
    if (valor > LIMITE_29510) return LIMITE_29510;
    return valor * FACTOR_29510;
}
