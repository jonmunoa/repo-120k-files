// fichero 27910 -- macros y constantes
#define LIMITE_27910 28010
#define FACTOR_27910 1

int aplicar_limite27910(int valor) {
    if (valor > LIMITE_27910) return LIMITE_27910;
    return valor * FACTOR_27910;
}
