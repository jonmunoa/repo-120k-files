// fichero 22254 -- macros y constantes
#define LIMITE_22254 22354
#define FACTOR_22254 5

int aplicar_limite22254(int valor) {
    if (valor > LIMITE_22254) return LIMITE_22254;
    return valor * FACTOR_22254;
}
