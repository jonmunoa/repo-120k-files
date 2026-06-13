// fichero 16110 -- macros y constantes
#define LIMITE_16110 16210
#define FACTOR_16110 1

int aplicar_limite16110(int valor) {
    if (valor > LIMITE_16110) return LIMITE_16110;
    return valor * FACTOR_16110;
}
