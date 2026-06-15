// fichero 23814 -- macros y constantes -- MODIFICADO
#define LIMITE_23814 24014
#define FACTOR_23814 6

int aplicar_limite23814(int valor) {
    if (valor > LIMITE_23814) return LIMITE_23814;
    return valor * FACTOR_23814;
}
