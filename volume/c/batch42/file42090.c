// fichero 42090 -- macros y constantes
#define LIMITE_42090 42190
#define FACTOR_42090 1

int aplicar_limite42090(int valor) {
    if (valor > LIMITE_42090) return LIMITE_42090;
    return valor * FACTOR_42090;
}
