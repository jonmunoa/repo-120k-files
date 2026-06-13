// fichero 11110 -- macros y constantes
#define LIMITE_11110 11210
#define FACTOR_11110 1

int aplicar_limite11110(int valor) {
    if (valor > LIMITE_11110) return LIMITE_11110;
    return valor * FACTOR_11110;
}
