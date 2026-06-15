// fichero 32998 -- macros y constantes -- MODIFICADO
#define LIMITE_32998 33198
#define FACTOR_32998 5

int aplicar_limite32998(int valor) {
    if (valor > LIMITE_32998) return LIMITE_32998;
    return valor * FACTOR_32998;
}
