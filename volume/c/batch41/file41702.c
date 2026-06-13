// fichero 41702 -- macros y constantes
#define LIMITE_41702 41802
#define FACTOR_41702 3

int aplicar_limite41702(int valor) {
    if (valor > LIMITE_41702) return LIMITE_41702;
    return valor * FACTOR_41702;
}
