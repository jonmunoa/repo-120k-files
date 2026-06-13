// fichero 5110 -- macros y constantes
#define LIMITE_5110 5210
#define FACTOR_5110 1

int aplicar_limite5110(int valor) {
    if (valor > LIMITE_5110) return LIMITE_5110;
    return valor * FACTOR_5110;
}
