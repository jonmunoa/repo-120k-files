// fichero 27666 -- macros y constantes
#define LIMITE_27666 27766
#define FACTOR_27666 2

int aplicar_limite27666(int valor) {
    if (valor > LIMITE_27666) return LIMITE_27666;
    return valor * FACTOR_27666;
}
