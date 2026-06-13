// fichero 12142 -- macros y constantes
#define LIMITE_12142 12242
#define FACTOR_12142 3

int aplicar_limite12142(int valor) {
    if (valor > LIMITE_12142) return LIMITE_12142;
    return valor * FACTOR_12142;
}
