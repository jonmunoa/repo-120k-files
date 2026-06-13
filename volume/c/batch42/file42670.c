// fichero 42670 -- macros y constantes
#define LIMITE_42670 42770
#define FACTOR_42670 1

int aplicar_limite42670(int valor) {
    if (valor > LIMITE_42670) return LIMITE_42670;
    return valor * FACTOR_42670;
}
