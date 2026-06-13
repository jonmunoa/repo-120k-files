// fichero 26662 -- macros y constantes
#define LIMITE_26662 26762
#define FACTOR_26662 3

int aplicar_limite26662(int valor) {
    if (valor > LIMITE_26662) return LIMITE_26662;
    return valor * FACTOR_26662;
}
