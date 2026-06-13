// fichero 2110 -- macros y constantes
#define LIMITE_2110 2210
#define FACTOR_2110 1

int aplicar_limite2110(int valor) {
    if (valor > LIMITE_2110) return LIMITE_2110;
    return valor * FACTOR_2110;
}
