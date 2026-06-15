// fichero 7434 -- macros y constantes -- MODIFICADO
#define LIMITE_7434 7634
#define FACTOR_7434 6

int aplicar_limite7434(int valor) {
    if (valor > LIMITE_7434) return LIMITE_7434;
    return valor * FACTOR_7434;
}
