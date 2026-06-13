// fichero 27250 -- macros y constantes
#define LIMITE_27250 27350
#define FACTOR_27250 1

int aplicar_limite27250(int valor) {
    if (valor > LIMITE_27250) return LIMITE_27250;
    return valor * FACTOR_27250;
}
