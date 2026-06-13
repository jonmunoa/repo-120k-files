// fichero 11510 -- macros y constantes
#define LIMITE_11510 11610
#define FACTOR_11510 1

int aplicar_limite11510(int valor) {
    if (valor > LIMITE_11510) return LIMITE_11510;
    return valor * FACTOR_11510;
}
