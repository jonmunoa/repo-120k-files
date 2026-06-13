// fichero 15666 -- macros y constantes
#define LIMITE_15666 15766
#define FACTOR_15666 2

int aplicar_limite15666(int valor) {
    if (valor > LIMITE_15666) return LIMITE_15666;
    return valor * FACTOR_15666;
}
