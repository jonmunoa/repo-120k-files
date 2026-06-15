// fichero 35706 -- macros y constantes -- MODIFICADO
#define LIMITE_35706 35906
#define FACTOR_35706 3

int aplicar_limite35706(int valor) {
    if (valor > LIMITE_35706) return LIMITE_35706;
    return valor * FACTOR_35706;
}
