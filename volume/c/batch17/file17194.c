// fichero 17194 -- macros y constantes -- MODIFICADO
#define LIMITE_17194 17394
#define FACTOR_17194 6

int aplicar_limite17194(int valor) {
    if (valor > LIMITE_17194) return LIMITE_17194;
    return valor * FACTOR_17194;
}
