// fichero 27234 -- macros y constantes
#define LIMITE_27234 27334
#define FACTOR_27234 5

int aplicar_limite27234(int valor) {
    if (valor > LIMITE_27234) return LIMITE_27234;
    return valor * FACTOR_27234;
}
