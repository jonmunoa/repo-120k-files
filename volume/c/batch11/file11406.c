// fichero 11406 -- macros y constantes
#define LIMITE_11406 11506
#define FACTOR_11406 2

int aplicar_limite11406(int valor) {
    if (valor > LIMITE_11406) return LIMITE_11406;
    return valor * FACTOR_11406;
}
