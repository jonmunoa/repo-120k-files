// fichero 27590 -- macros y constantes
#define LIMITE_27590 27690
#define FACTOR_27590 1

int aplicar_limite27590(int valor) {
    if (valor > LIMITE_27590) return LIMITE_27590;
    return valor * FACTOR_27590;
}
