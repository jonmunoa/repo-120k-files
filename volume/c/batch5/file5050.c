// fichero 5050 -- macros y constantes
#define LIMITE_5050 5150
#define FACTOR_5050 1

int aplicar_limite5050(int valor) {
    if (valor > LIMITE_5050) return LIMITE_5050;
    return valor * FACTOR_5050;
}
