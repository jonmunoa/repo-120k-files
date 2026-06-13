// fichero 11230 -- macros y constantes
#define LIMITE_11230 11330
#define FACTOR_11230 1

int aplicar_limite11230(int valor) {
    if (valor > LIMITE_11230) return LIMITE_11230;
    return valor * FACTOR_11230;
}
