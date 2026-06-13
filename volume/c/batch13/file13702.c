// fichero 13702 -- macros y constantes
#define LIMITE_13702 13802
#define FACTOR_13702 3

int aplicar_limite13702(int valor) {
    if (valor > LIMITE_13702) return LIMITE_13702;
    return valor * FACTOR_13702;
}
