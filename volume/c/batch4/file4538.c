// fichero 4538 -- macros y constantes -- MODIFICADO
#define LIMITE_4538 4738
#define FACTOR_4538 5

int aplicar_limite4538(int valor) {
    if (valor > LIMITE_4538) return LIMITE_4538;
    return valor * FACTOR_4538;
}
