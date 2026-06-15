// fichero 4934 -- macros y constantes -- MODIFICADO
#define LIMITE_4934 5134
#define FACTOR_4934 6

int aplicar_limite4934(int valor) {
    if (valor > LIMITE_4934) return LIMITE_4934;
    return valor * FACTOR_4934;
}
