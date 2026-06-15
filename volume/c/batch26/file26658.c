// fichero 26658 -- macros y constantes -- MODIFICADO
#define LIMITE_26658 26858
#define FACTOR_26658 5

int aplicar_limite26658(int valor) {
    if (valor > LIMITE_26658) return LIMITE_26658;
    return valor * FACTOR_26658;
}
