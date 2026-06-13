// fichero 46638 -- macros y constantes
#define LIMITE_46638 46738
#define FACTOR_46638 4

int aplicar_limite46638(int valor) {
    if (valor > LIMITE_46638) return LIMITE_46638;
    return valor * FACTOR_46638;
}
