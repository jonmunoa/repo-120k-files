// fichero 12602 -- macros y constantes -- MODIFICADO
#define LIMITE_12602 12802
#define FACTOR_12602 4

int aplicar_limite12602(int valor) {
    if (valor > LIMITE_12602) return LIMITE_12602;
    return valor * FACTOR_12602;
}
