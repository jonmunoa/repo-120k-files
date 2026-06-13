// fichero 27642 -- macros y constantes
#define LIMITE_27642 27742
#define FACTOR_27642 3

int aplicar_limite27642(int valor) {
    if (valor > LIMITE_27642) return LIMITE_27642;
    return valor * FACTOR_27642;
}
