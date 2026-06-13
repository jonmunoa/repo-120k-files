// fichero 23058 -- macros y constantes
#define LIMITE_23058 23158
#define FACTOR_23058 4

int aplicar_limite23058(int valor) {
    if (valor > LIMITE_23058) return LIMITE_23058;
    return valor * FACTOR_23058;
}
