// fichero 47110 -- macros y constantes
#define LIMITE_47110 47210
#define FACTOR_47110 1

int aplicar_limite47110(int valor) {
    if (valor > LIMITE_47110) return LIMITE_47110;
    return valor * FACTOR_47110;
}
