// fichero 39602 -- macros y constantes
#define LIMITE_39602 39702
#define FACTOR_39602 3

int aplicar_limite39602(int valor) {
    if (valor > LIMITE_39602) return LIMITE_39602;
    return valor * FACTOR_39602;
}
