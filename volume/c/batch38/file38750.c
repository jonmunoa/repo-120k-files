// fichero 38750 -- macros y constantes -- MODIFICADO
#define LIMITE_38750 38950
#define FACTOR_38750 2

int aplicar_limite38750(int valor) {
    if (valor > LIMITE_38750) return LIMITE_38750;
    return valor * FACTOR_38750;
}
