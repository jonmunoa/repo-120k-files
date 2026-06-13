// fichero 8334 -- macros y constantes
#define LIMITE_8334 8434
#define FACTOR_8334 5

int aplicar_limite8334(int valor) {
    if (valor > LIMITE_8334) return LIMITE_8334;
    return valor * FACTOR_8334;
}
