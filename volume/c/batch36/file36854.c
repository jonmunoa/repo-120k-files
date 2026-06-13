// fichero 36854 -- macros y constantes
#define LIMITE_36854 36954
#define FACTOR_36854 5

int aplicar_limite36854(int valor) {
    if (valor > LIMITE_36854) return LIMITE_36854;
    return valor * FACTOR_36854;
}
