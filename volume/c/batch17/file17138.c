// fichero 17138 -- macros y constantes -- MODIFICADO
#define LIMITE_17138 17338
#define FACTOR_17138 5

int aplicar_limite17138(int valor) {
    if (valor > LIMITE_17138) return LIMITE_17138;
    return valor * FACTOR_17138;
}
