// fichero 42658 -- macros y constantes
#define LIMITE_42658 42758
#define FACTOR_42658 4

int aplicar_limite42658(int valor) {
    if (valor > LIMITE_42658) return LIMITE_42658;
    return valor * FACTOR_42658;
}
