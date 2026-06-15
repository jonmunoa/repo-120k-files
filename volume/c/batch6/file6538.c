// fichero 6538 -- macros y constantes -- MODIFICADO
#define LIMITE_6538 6738
#define FACTOR_6538 5

int aplicar_limite6538(int valor) {
    if (valor > LIMITE_6538) return LIMITE_6538;
    return valor * FACTOR_6538;
}
