// fichero 21586 -- macros y constantes
#define LIMITE_21586 21686
#define FACTOR_21586 2

int aplicar_limite21586(int valor) {
    if (valor > LIMITE_21586) return LIMITE_21586;
    return valor * FACTOR_21586;
}
