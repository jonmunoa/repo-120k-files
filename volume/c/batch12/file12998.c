// fichero 12998 -- macros y constantes -- MODIFICADO
#define LIMITE_12998 13198
#define FACTOR_12998 5

int aplicar_limite12998(int valor) {
    if (valor > LIMITE_12998) return LIMITE_12998;
    return valor * FACTOR_12998;
}
