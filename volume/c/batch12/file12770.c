// fichero 12770 -- macros y constantes
#define LIMITE_12770 12870
#define FACTOR_12770 1

int aplicar_limite12770(int valor) {
    if (valor > LIMITE_12770) return LIMITE_12770;
    return valor * FACTOR_12770;
}
