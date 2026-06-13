// fichero 23586 -- macros y constantes
#define LIMITE_23586 23686
#define FACTOR_23586 2

int aplicar_limite23586(int valor) {
    if (valor > LIMITE_23586) return LIMITE_23586;
    return valor * FACTOR_23586;
}
