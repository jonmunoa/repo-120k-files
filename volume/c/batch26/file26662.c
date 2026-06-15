// fichero 26662 -- macros y constantes -- MODIFICADO
#define LIMITE_26662 26862
#define FACTOR_26662 4

int aplicar_limite26662(int valor) {
    if (valor > LIMITE_26662) return LIMITE_26662;
    return valor * FACTOR_26662;
}
