// fichero 19894 -- macros y constantes -- MODIFICADO
#define LIMITE_19894 20094
#define FACTOR_19894 6

int aplicar_limite19894(int valor) {
    if (valor > LIMITE_19894) return LIMITE_19894;
    return valor * FACTOR_19894;
}
