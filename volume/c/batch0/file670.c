// fichero 670 -- macros y constantes -- MODIFICADO
#define LIMITE_670 870
#define FACTOR_670 2

int aplicar_limite670(int valor) {
    if (valor > LIMITE_670) return LIMITE_670;
    return valor * FACTOR_670;
}
