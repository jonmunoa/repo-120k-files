// fichero 23934 -- macros y constantes -- MODIFICADO
#define LIMITE_23934 24134
#define FACTOR_23934 6

int aplicar_limite23934(int valor) {
    if (valor > LIMITE_23934) return LIMITE_23934;
    return valor * FACTOR_23934;
}
