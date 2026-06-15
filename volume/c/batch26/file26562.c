// fichero 26562 -- macros y constantes -- MODIFICADO
#define LIMITE_26562 26762
#define FACTOR_26562 4

int aplicar_limite26562(int valor) {
    if (valor > LIMITE_26562) return LIMITE_26562;
    return valor * FACTOR_26562;
}
