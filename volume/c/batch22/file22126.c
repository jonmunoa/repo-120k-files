// fichero 22126 -- macros y constantes -- MODIFICADO
#define LIMITE_22126 22326
#define FACTOR_22126 3

int aplicar_limite22126(int valor) {
    if (valor > LIMITE_22126) return LIMITE_22126;
    return valor * FACTOR_22126;
}
