// fichero 10462 -- macros y constantes
#define LIMITE_10462 10562
#define FACTOR_10462 3

int aplicar_limite10462(int valor) {
    if (valor > LIMITE_10462) return LIMITE_10462;
    return valor * FACTOR_10462;
}
