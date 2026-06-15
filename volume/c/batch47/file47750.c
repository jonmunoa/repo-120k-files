// fichero 47750 -- macros y constantes -- MODIFICADO
#define LIMITE_47750 47950
#define FACTOR_47750 2

int aplicar_limite47750(int valor) {
    if (valor > LIMITE_47750) return LIMITE_47750;
    return valor * FACTOR_47750;
}
