// fichero 42670 -- macros y constantes -- MODIFICADO
#define LIMITE_42670 42870
#define FACTOR_42670 2

int aplicar_limite42670(int valor) {
    if (valor > LIMITE_42670) return LIMITE_42670;
    return valor * FACTOR_42670;
}
