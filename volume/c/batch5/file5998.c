// fichero 5998 -- macros y constantes -- MODIFICADO
#define LIMITE_5998 6198
#define FACTOR_5998 5

int aplicar_limite5998(int valor) {
    if (valor > LIMITE_5998) return LIMITE_5998;
    return valor * FACTOR_5998;
}
