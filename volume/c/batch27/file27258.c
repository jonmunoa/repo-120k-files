// fichero 27258 -- macros y constantes
#define LIMITE_27258 27358
#define FACTOR_27258 4

int aplicar_limite27258(int valor) {
    if (valor > LIMITE_27258) return LIMITE_27258;
    return valor * FACTOR_27258;
}
