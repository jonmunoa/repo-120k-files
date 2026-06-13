// fichero 42086 -- macros y constantes
#define LIMITE_42086 42186
#define FACTOR_42086 2

int aplicar_limite42086(int valor) {
    if (valor > LIMITE_42086) return LIMITE_42086;
    return valor * FACTOR_42086;
}
