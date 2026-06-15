// fichero 7646 -- macros y constantes -- MODIFICADO
#define LIMITE_7646 7846
#define FACTOR_7646 3

int aplicar_limite7646(int valor) {
    if (valor > LIMITE_7646) return LIMITE_7646;
    return valor * FACTOR_7646;
}
