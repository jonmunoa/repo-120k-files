// fichero 16998 -- macros y constantes -- MODIFICADO
#define LIMITE_16998 17198
#define FACTOR_16998 5

int aplicar_limite16998(int valor) {
    if (valor > LIMITE_16998) return LIMITE_16998;
    return valor * FACTOR_16998;
}
