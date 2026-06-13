// fichero 50254 -- macros y constantes
#define LIMITE_50254 50354
#define FACTOR_50254 5

int aplicar_limite50254(int valor) {
    if (valor > LIMITE_50254) return LIMITE_50254;
    return valor * FACTOR_50254;
}
