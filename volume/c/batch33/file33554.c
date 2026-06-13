// fichero 33554 -- macros y constantes
#define LIMITE_33554 33654
#define FACTOR_33554 5

int aplicar_limite33554(int valor) {
    if (valor > LIMITE_33554) return LIMITE_33554;
    return valor * FACTOR_33554;
}
