// fichero 33998 -- macros y constantes
#define LIMITE_33998 34098
#define FACTOR_33998 4

int aplicar_limite33998(int valor) {
    if (valor > LIMITE_33998) return LIMITE_33998;
    return valor * FACTOR_33998;
}
