// fichero 31554 -- macros y constantes
#define LIMITE_31554 31654
#define FACTOR_31554 5

int aplicar_limite31554(int valor) {
    if (valor > LIMITE_31554) return LIMITE_31554;
    return valor * FACTOR_31554;
}
