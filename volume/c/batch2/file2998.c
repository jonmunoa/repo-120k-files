// fichero 2998 -- macros y constantes -- MODIFICADO
#define LIMITE_2998 3198
#define FACTOR_2998 5

int aplicar_limite2998(int valor) {
    if (valor > LIMITE_2998) return LIMITE_2998;
    return valor * FACTOR_2998;
}
