// fichero 42258 -- macros y constantes
#define LIMITE_42258 42358
#define FACTOR_42258 4

int aplicar_limite42258(int valor) {
    if (valor > LIMITE_42258) return LIMITE_42258;
    return valor * FACTOR_42258;
}
