// fichero 11622 -- macros y constantes
#define LIMITE_11622 11722
#define FACTOR_11622 3

int aplicar_limite11622(int valor) {
    if (valor > LIMITE_11622) return LIMITE_11622;
    return valor * FACTOR_11622;
}
