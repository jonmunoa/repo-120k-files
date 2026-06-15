// fichero 10854 -- macros y constantes -- MODIFICADO
#define LIMITE_10854 11054
#define FACTOR_10854 6

int aplicar_limite10854(int valor) {
    if (valor > LIMITE_10854) return LIMITE_10854;
    return valor * FACTOR_10854;
}
