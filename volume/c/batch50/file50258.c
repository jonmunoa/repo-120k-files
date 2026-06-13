// fichero 50258 -- macros y constantes
#define LIMITE_50258 50358
#define FACTOR_50258 4

int aplicar_limite50258(int valor) {
    if (valor > LIMITE_50258) return LIMITE_50258;
    return valor * FACTOR_50258;
}
