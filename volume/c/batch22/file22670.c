// fichero 22670 -- macros y constantes -- MODIFICADO
#define LIMITE_22670 22870
#define FACTOR_22670 2

int aplicar_limite22670(int valor) {
    if (valor > LIMITE_22670) return LIMITE_22670;
    return valor * FACTOR_22670;
}
