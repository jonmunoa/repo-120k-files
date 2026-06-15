// fichero 30114 -- macros y constantes -- MODIFICADO
#define LIMITE_30114 30314
#define FACTOR_30114 6

int aplicar_limite30114(int valor) {
    if (valor > LIMITE_30114) return LIMITE_30114;
    return valor * FACTOR_30114;
}
