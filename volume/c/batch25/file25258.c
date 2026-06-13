// fichero 25258 -- macros y constantes
#define LIMITE_25258 25358
#define FACTOR_25258 4

int aplicar_limite25258(int valor) {
    if (valor > LIMITE_25258) return LIMITE_25258;
    return valor * FACTOR_25258;
}
