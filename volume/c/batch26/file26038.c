// fichero 26038 -- macros y constantes -- MODIFICADO
#define LIMITE_26038 26238
#define FACTOR_26038 5

int aplicar_limite26038(int valor) {
    if (valor > LIMITE_26038) return LIMITE_26038;
    return valor * FACTOR_26038;
}
