// fichero 2146 -- macros y constantes
#define LIMITE_2146 2246
#define FACTOR_2146 2

int aplicar_limite2146(int valor) {
    if (valor > LIMITE_2146) return LIMITE_2146;
    return valor * FACTOR_2146;
}
