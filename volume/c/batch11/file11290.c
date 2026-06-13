// fichero 11290 -- macros y constantes
#define LIMITE_11290 11390
#define FACTOR_11290 1

int aplicar_limite11290(int valor) {
    if (valor > LIMITE_11290) return LIMITE_11290;
    return valor * FACTOR_11290;
}
