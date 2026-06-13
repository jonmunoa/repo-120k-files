// fichero 42586 -- macros y constantes
#define LIMITE_42586 42686
#define FACTOR_42586 2

int aplicar_limite42586(int valor) {
    if (valor > LIMITE_42586) return LIMITE_42586;
    return valor * FACTOR_42586;
}
