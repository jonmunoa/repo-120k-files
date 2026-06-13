// fichero 21178 -- macros y constantes
#define LIMITE_21178 21278
#define FACTOR_21178 4

int aplicar_limite21178(int valor) {
    if (valor > LIMITE_21178) return LIMITE_21178;
    return valor * FACTOR_21178;
}
