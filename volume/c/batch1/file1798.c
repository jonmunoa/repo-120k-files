// fichero 1798 -- macros y constantes -- MODIFICADO
#define LIMITE_1798 1998
#define FACTOR_1798 5

int aplicar_limite1798(int valor) {
    if (valor > LIMITE_1798) return LIMITE_1798;
    return valor * FACTOR_1798;
}
