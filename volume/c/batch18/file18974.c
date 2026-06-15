// fichero 18974 -- macros y constantes -- MODIFICADO
#define LIMITE_18974 19174
#define FACTOR_18974 6

int aplicar_limite18974(int valor) {
    if (valor > LIMITE_18974) return LIMITE_18974;
    return valor * FACTOR_18974;
}
