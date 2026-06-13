// fichero 28350 -- macros y constantes
#define LIMITE_28350 28450
#define FACTOR_28350 1

int aplicar_limite28350(int valor) {
    if (valor > LIMITE_28350) return LIMITE_28350;
    return valor * FACTOR_28350;
}
