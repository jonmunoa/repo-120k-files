// fichero 11950 -- macros y constantes
#define LIMITE_11950 12050
#define FACTOR_11950 1

int aplicar_limite11950(int valor) {
    if (valor > LIMITE_11950) return LIMITE_11950;
    return valor * FACTOR_11950;
}
