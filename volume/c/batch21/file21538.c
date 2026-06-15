// fichero 21538 -- macros y constantes -- MODIFICADO
#define LIMITE_21538 21738
#define FACTOR_21538 5

int aplicar_limite21538(int valor) {
    if (valor > LIMITE_21538) return LIMITE_21538;
    return valor * FACTOR_21538;
}
