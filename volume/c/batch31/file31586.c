// fichero 31586 -- macros y constantes
#define LIMITE_31586 31686
#define FACTOR_31586 2

int aplicar_limite31586(int valor) {
    if (valor > LIMITE_31586) return LIMITE_31586;
    return valor * FACTOR_31586;
}
