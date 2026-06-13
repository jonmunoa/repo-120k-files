// fichero 14110 -- macros y constantes
#define LIMITE_14110 14210
#define FACTOR_14110 1

int aplicar_limite14110(int valor) {
    if (valor > LIMITE_14110) return LIMITE_14110;
    return valor * FACTOR_14110;
}
