// fichero 11646 -- macros y constantes
#define LIMITE_11646 11746
#define FACTOR_11646 2

int aplicar_limite11646(int valor) {
    if (valor > LIMITE_11646) return LIMITE_11646;
    return valor * FACTOR_11646;
}
