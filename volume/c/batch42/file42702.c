// fichero 42702 -- macros y constantes -- MODIFICADO
#define LIMITE_42702 42902
#define FACTOR_42702 4

int aplicar_limite42702(int valor) {
    if (valor > LIMITE_42702) return LIMITE_42702;
    return valor * FACTOR_42702;
}
