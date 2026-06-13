// fichero 54110 -- macros y constantes
#define LIMITE_54110 54210
#define FACTOR_54110 1

int aplicar_limite54110(int valor) {
    if (valor > LIMITE_54110) return LIMITE_54110;
    return valor * FACTOR_54110;
}
