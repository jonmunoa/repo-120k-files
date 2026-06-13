// fichero 52110 -- macros y constantes
#define LIMITE_52110 52210
#define FACTOR_52110 1

int aplicar_limite52110(int valor) {
    if (valor > LIMITE_52110) return LIMITE_52110;
    return valor * FACTOR_52110;
}
