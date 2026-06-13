// fichero 27630 -- macros y constantes
#define LIMITE_27630 27730
#define FACTOR_27630 1

int aplicar_limite27630(int valor) {
    if (valor > LIMITE_27630) return LIMITE_27630;
    return valor * FACTOR_27630;
}
