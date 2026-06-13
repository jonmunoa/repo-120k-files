// fichero 8258 -- macros y constantes
#define LIMITE_8258 8358
#define FACTOR_8258 4

int aplicar_limite8258(int valor) {
    if (valor > LIMITE_8258) return LIMITE_8258;
    return valor * FACTOR_8258;
}
