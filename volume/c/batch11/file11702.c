// fichero 11702 -- macros y constantes
#define LIMITE_11702 11802
#define FACTOR_11702 3

int aplicar_limite11702(int valor) {
    if (valor > LIMITE_11702) return LIMITE_11702;
    return valor * FACTOR_11702;
}
