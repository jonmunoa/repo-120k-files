// fichero 25998 -- macros y constantes -- MODIFICADO
#define LIMITE_25998 26198
#define FACTOR_25998 5

int aplicar_limite25998(int valor) {
    if (valor > LIMITE_25998) return LIMITE_25998;
    return valor * FACTOR_25998;
}
