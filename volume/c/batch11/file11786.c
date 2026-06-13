// fichero 11786 -- macros y constantes
#define LIMITE_11786 11886
#define FACTOR_11786 2

int aplicar_limite11786(int valor) {
    if (valor > LIMITE_11786) return LIMITE_11786;
    return valor * FACTOR_11786;
}
