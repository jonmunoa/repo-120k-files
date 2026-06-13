// fichero 32430 -- macros y constantes
#define LIMITE_32430 32530
#define FACTOR_32430 1

int aplicar_limite32430(int valor) {
    if (valor > LIMITE_32430) return LIMITE_32430;
    return valor * FACTOR_32430;
}
