// fichero 22934 -- macros y constantes -- MODIFICADO
#define LIMITE_22934 23134
#define FACTOR_22934 6

int aplicar_limite22934(int valor) {
    if (valor > LIMITE_22934) return LIMITE_22934;
    return valor * FACTOR_22934;
}
