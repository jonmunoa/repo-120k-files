// fichero 10934 -- macros y constantes -- MODIFICADO
#define LIMITE_10934 11134
#define FACTOR_10934 6

int aplicar_limite10934(int valor) {
    if (valor > LIMITE_10934) return LIMITE_10934;
    return valor * FACTOR_10934;
}
