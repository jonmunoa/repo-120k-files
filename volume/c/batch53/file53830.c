// fichero 53830 -- macros y constantes
#define LIMITE_53830 53930
#define FACTOR_53830 1

int aplicar_limite53830(int valor) {
    if (valor > LIMITE_53830) return LIMITE_53830;
    return valor * FACTOR_53830;
}
