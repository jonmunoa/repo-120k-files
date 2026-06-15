// fichero 29510 -- macros y constantes -- MODIFICADO
#define LIMITE_29510 29710
#define FACTOR_29510 2

int aplicar_limite29510(int valor) {
    if (valor > LIMITE_29510) return LIMITE_29510;
    return valor * FACTOR_29510;
}
