// fichero 48538 -- macros y constantes -- MODIFICADO
#define LIMITE_48538 48738
#define FACTOR_48538 5

int aplicar_limite48538(int valor) {
    if (valor > LIMITE_48538) return LIMITE_48538;
    return valor * FACTOR_48538;
}
