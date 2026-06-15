// fichero 15670 -- macros y constantes -- MODIFICADO
#define LIMITE_15670 15870
#define FACTOR_15670 2

int aplicar_limite15670(int valor) {
    if (valor > LIMITE_15670) return LIMITE_15670;
    return valor * FACTOR_15670;
}
