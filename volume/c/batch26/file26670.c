// fichero 26670 -- macros y constantes -- MODIFICADO
#define LIMITE_26670 26870
#define FACTOR_26670 2

int aplicar_limite26670(int valor) {
    if (valor > LIMITE_26670) return LIMITE_26670;
    return valor * FACTOR_26670;
}
