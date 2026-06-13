// fichero 42642 -- macros y constantes
#define LIMITE_42642 42742
#define FACTOR_42642 3

int aplicar_limite42642(int valor) {
    if (valor > LIMITE_42642) return LIMITE_42642;
    return valor * FACTOR_42642;
}
