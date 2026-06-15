// fichero 40670 -- macros y constantes -- MODIFICADO
#define LIMITE_40670 40870
#define FACTOR_40670 2

int aplicar_limite40670(int valor) {
    if (valor > LIMITE_40670) return LIMITE_40670;
    return valor * FACTOR_40670;
}
