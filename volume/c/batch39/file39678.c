// fichero 39678 -- macros y constantes
#define LIMITE_39678 39778
#define FACTOR_39678 4

int aplicar_limite39678(int valor) {
    if (valor > LIMITE_39678) return LIMITE_39678;
    return valor * FACTOR_39678;
}
