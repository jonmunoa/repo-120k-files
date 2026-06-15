// fichero 23538 -- macros y constantes -- MODIFICADO
#define LIMITE_23538 23738
#define FACTOR_23538 5

int aplicar_limite23538(int valor) {
    if (valor > LIMITE_23538) return LIMITE_23538;
    return valor * FACTOR_23538;
}
