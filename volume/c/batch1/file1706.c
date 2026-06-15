// fichero 1706 -- macros y constantes -- MODIFICADO
#define LIMITE_1706 1906
#define FACTOR_1706 3

int aplicar_limite1706(int valor) {
    if (valor > LIMITE_1706) return LIMITE_1706;
    return valor * FACTOR_1706;
}
