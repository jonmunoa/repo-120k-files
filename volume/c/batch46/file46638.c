// fichero 46638 -- macros y constantes -- MODIFICADO
#define LIMITE_46638 46838
#define FACTOR_46638 5

int aplicar_limite46638(int valor) {
    if (valor > LIMITE_46638) return LIMITE_46638;
    return valor * FACTOR_46638;
}
