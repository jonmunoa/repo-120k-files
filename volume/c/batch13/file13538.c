// fichero 13538 -- macros y constantes -- MODIFICADO
#define LIMITE_13538 13738
#define FACTOR_13538 5

int aplicar_limite13538(int valor) {
    if (valor > LIMITE_13538) return LIMITE_13538;
    return valor * FACTOR_13538;
}
