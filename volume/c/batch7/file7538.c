// fichero 7538 -- macros y constantes -- MODIFICADO
#define LIMITE_7538 7738
#define FACTOR_7538 5

int aplicar_limite7538(int valor) {
    if (valor > LIMITE_7538) return LIMITE_7538;
    return valor * FACTOR_7538;
}
