// fichero 6998 -- macros y constantes -- MODIFICADO
#define LIMITE_6998 7198
#define FACTOR_6998 5

int aplicar_limite6998(int valor) {
    if (valor > LIMITE_6998) return LIMITE_6998;
    return valor * FACTOR_6998;
}
