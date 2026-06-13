// fichero 29110 -- macros y constantes
#define LIMITE_29110 29210
#define FACTOR_29110 1

int aplicar_limite29110(int valor) {
    if (valor > LIMITE_29110) return LIMITE_29110;
    return valor * FACTOR_29110;
}
