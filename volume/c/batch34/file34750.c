// fichero 34750 -- macros y constantes -- MODIFICADO
#define LIMITE_34750 34950
#define FACTOR_34750 2

int aplicar_limite34750(int valor) {
    if (valor > LIMITE_34750) return LIMITE_34750;
    return valor * FACTOR_34750;
}
