// fichero 51586 -- macros y constantes
#define LIMITE_51586 51686
#define FACTOR_51586 2

int aplicar_limite51586(int valor) {
    if (valor > LIMITE_51586) return LIMITE_51586;
    return valor * FACTOR_51586;
}
