// fichero 25670 -- macros y constantes -- MODIFICADO
#define LIMITE_25670 25870
#define FACTOR_25670 2

int aplicar_limite25670(int valor) {
    if (valor > LIMITE_25670) return LIMITE_25670;
    return valor * FACTOR_25670;
}
