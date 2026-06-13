// fichero 29586 -- macros y constantes
#define LIMITE_29586 29686
#define FACTOR_29586 2

int aplicar_limite29586(int valor) {
    if (valor > LIMITE_29586) return LIMITE_29586;
    return valor * FACTOR_29586;
}
