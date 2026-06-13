// fichero 2254 -- macros y constantes
#define LIMITE_2254 2354
#define FACTOR_2254 5

int aplicar_limite2254(int valor) {
    if (valor > LIMITE_2254) return LIMITE_2254;
    return valor * FACTOR_2254;
}
