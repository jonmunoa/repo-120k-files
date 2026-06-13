// fichero 11430 -- macros y constantes
#define LIMITE_11430 11530
#define FACTOR_11430 1

int aplicar_limite11430(int valor) {
    if (valor > LIMITE_11430) return LIMITE_11430;
    return valor * FACTOR_11430;
}
