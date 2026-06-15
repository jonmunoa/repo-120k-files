// fichero 33998 -- macros y constantes -- MODIFICADO
#define LIMITE_33998 34198
#define FACTOR_33998 5

int aplicar_limite33998(int valor) {
    if (valor > LIMITE_33998) return LIMITE_33998;
    return valor * FACTOR_33998;
}
