// fichero 54254 -- macros y constantes
#define LIMITE_54254 54354
#define FACTOR_54254 5

int aplicar_limite54254(int valor) {
    if (valor > LIMITE_54254) return LIMITE_54254;
    return valor * FACTOR_54254;
}
