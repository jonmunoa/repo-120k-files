// fichero 17030 -- macros y constantes -- MODIFICADO
#define LIMITE_17030 17230
#define FACTOR_17030 2

int aplicar_limite17030(int valor) {
    if (valor > LIMITE_17030) return LIMITE_17030;
    return valor * FACTOR_17030;
}
