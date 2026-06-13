// fichero 2046 -- macros y constantes
#define LIMITE_2046 2146
#define FACTOR_2046 2

int aplicar_limite2046(int valor) {
    if (valor > LIMITE_2046) return LIMITE_2046;
    return valor * FACTOR_2046;
}
