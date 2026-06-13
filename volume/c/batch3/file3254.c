// fichero 3254 -- macros y constantes
#define LIMITE_3254 3354
#define FACTOR_3254 5

int aplicar_limite3254(int valor) {
    if (valor > LIMITE_3254) return LIMITE_3254;
    return valor * FACTOR_3254;
}
