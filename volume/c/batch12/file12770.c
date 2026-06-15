// fichero 12770 -- macros y constantes -- MODIFICADO
#define LIMITE_12770 12970
#define FACTOR_12770 2

int aplicar_limite12770(int valor) {
    if (valor > LIMITE_12770) return LIMITE_12770;
    return valor * FACTOR_12770;
}
