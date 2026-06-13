// fichero 42186 -- macros y constantes
#define LIMITE_42186 42286
#define FACTOR_42186 2

int aplicar_limite42186(int valor) {
    if (valor > LIMITE_42186) return LIMITE_42186;
    return valor * FACTOR_42186;
}
