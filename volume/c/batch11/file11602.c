// fichero 11602 -- macros y constantes
#define LIMITE_11602 11702
#define FACTOR_11602 3

int aplicar_limite11602(int valor) {
    if (valor > LIMITE_11602) return LIMITE_11602;
    return valor * FACTOR_11602;
}
