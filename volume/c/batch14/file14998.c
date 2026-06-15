// fichero 14998 -- macros y constantes -- MODIFICADO
#define LIMITE_14998 15198
#define FACTOR_14998 5

int aplicar_limite14998(int valor) {
    if (valor > LIMITE_14998) return LIMITE_14998;
    return valor * FACTOR_14998;
}
