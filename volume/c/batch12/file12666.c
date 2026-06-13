// fichero 12666 -- macros y constantes
#define LIMITE_12666 12766
#define FACTOR_12666 2

int aplicar_limite12666(int valor) {
    if (valor > LIMITE_12666) return LIMITE_12666;
    return valor * FACTOR_12666;
}
