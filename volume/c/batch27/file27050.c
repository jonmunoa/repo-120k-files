// fichero 27050 -- macros y constantes
#define LIMITE_27050 27150
#define FACTOR_27050 1

int aplicar_limite27050(int valor) {
    if (valor > LIMITE_27050) return LIMITE_27050;
    return valor * FACTOR_27050;
}
