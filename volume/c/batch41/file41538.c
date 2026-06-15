// fichero 41538 -- macros y constantes -- MODIFICADO
#define LIMITE_41538 41738
#define FACTOR_41538 5

int aplicar_limite41538(int valor) {
    if (valor > LIMITE_41538) return LIMITE_41538;
    return valor * FACTOR_41538;
}
