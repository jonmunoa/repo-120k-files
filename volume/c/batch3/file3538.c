// fichero 3538 -- macros y constantes -- MODIFICADO
#define LIMITE_3538 3738
#define FACTOR_3538 5

int aplicar_limite3538(int valor) {
    if (valor > LIMITE_3538) return LIMITE_3538;
    return valor * FACTOR_3538;
}
