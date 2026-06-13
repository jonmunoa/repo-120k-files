// fichero 53666 -- macros y constantes
#define LIMITE_53666 53766
#define FACTOR_53666 2

int aplicar_limite53666(int valor) {
    if (valor > LIMITE_53666) return LIMITE_53666;
    return valor * FACTOR_53666;
}
