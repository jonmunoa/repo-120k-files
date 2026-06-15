// fichero 7838 -- macros y constantes -- MODIFICADO
#define LIMITE_7838 8038
#define FACTOR_7838 5

int aplicar_limite7838(int valor) {
    if (valor > LIMITE_7838) return LIMITE_7838;
    return valor * FACTOR_7838;
}
