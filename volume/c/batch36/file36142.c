// fichero 36142 -- macros y constantes
#define LIMITE_36142 36242
#define FACTOR_36142 3

int aplicar_limite36142(int valor) {
    if (valor > LIMITE_36142) return LIMITE_36142;
    return valor * FACTOR_36142;
}
