// fichero 35670 -- macros y constantes -- MODIFICADO
#define LIMITE_35670 35870
#define FACTOR_35670 2

int aplicar_limite35670(int valor) {
    if (valor > LIMITE_35670) return LIMITE_35670;
    return valor * FACTOR_35670;
}
