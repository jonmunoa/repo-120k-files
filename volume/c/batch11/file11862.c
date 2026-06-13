// fichero 11862 -- macros y constantes
#define LIMITE_11862 11962
#define FACTOR_11862 3

int aplicar_limite11862(int valor) {
    if (valor > LIMITE_11862) return LIMITE_11862;
    return valor * FACTOR_11862;
}
