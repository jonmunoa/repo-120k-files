// fichero 11250 -- macros y constantes
#define LIMITE_11250 11350
#define FACTOR_11250 1

int aplicar_limite11250(int valor) {
    if (valor > LIMITE_11250) return LIMITE_11250;
    return valor * FACTOR_11250;
}
