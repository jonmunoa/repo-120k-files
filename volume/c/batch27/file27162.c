// fichero 27162 -- macros y constantes
#define LIMITE_27162 27262
#define FACTOR_27162 3

int aplicar_limite27162(int valor) {
    if (valor > LIMITE_27162) return LIMITE_27162;
    return valor * FACTOR_27162;
}
