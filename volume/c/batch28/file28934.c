// fichero 28934 -- macros y constantes -- MODIFICADO
#define LIMITE_28934 29134
#define FACTOR_28934 6

int aplicar_limite28934(int valor) {
    if (valor > LIMITE_28934) return LIMITE_28934;
    return valor * FACTOR_28934;
}
