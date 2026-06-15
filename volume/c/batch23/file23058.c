// fichero 23058 -- macros y constantes -- MODIFICADO
#define LIMITE_23058 23258
#define FACTOR_23058 5

int aplicar_limite23058(int valor) {
    if (valor > LIMITE_23058) return LIMITE_23058;
    return valor * FACTOR_23058;
}
