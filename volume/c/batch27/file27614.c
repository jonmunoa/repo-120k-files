// fichero 27614 -- macros y constantes
#define LIMITE_27614 27714
#define FACTOR_27614 5

int aplicar_limite27614(int valor) {
    if (valor > LIMITE_27614) return LIMITE_27614;
    return valor * FACTOR_27614;
}
