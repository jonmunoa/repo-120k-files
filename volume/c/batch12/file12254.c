// fichero 12254 -- macros y constantes
#define LIMITE_12254 12354
#define FACTOR_12254 5

int aplicar_limite12254(int valor) {
    if (valor > LIMITE_12254) return LIMITE_12254;
    return valor * FACTOR_12254;
}
