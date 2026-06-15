// fichero 24538 -- macros y constantes -- MODIFICADO
#define LIMITE_24538 24738
#define FACTOR_24538 5

int aplicar_limite24538(int valor) {
    if (valor > LIMITE_24538) return LIMITE_24538;
    return valor * FACTOR_24538;
}
