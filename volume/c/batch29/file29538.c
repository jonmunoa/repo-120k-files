// fichero 29538 -- macros y constantes -- MODIFICADO
#define LIMITE_29538 29738
#define FACTOR_29538 5

int aplicar_limite29538(int valor) {
    if (valor > LIMITE_29538) return LIMITE_29538;
    return valor * FACTOR_29538;
}
