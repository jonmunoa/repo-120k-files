// fichero 31366 -- macros y constantes
#define LIMITE_31366 31466
#define FACTOR_31366 2

int aplicar_limite31366(int valor) {
    if (valor > LIMITE_31366) return LIMITE_31366;
    return valor * FACTOR_31366;
}
