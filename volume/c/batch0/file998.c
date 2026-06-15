// fichero 998 -- macros y constantes -- MODIFICADO
#define LIMITE_998 1198
#define FACTOR_998 5

int aplicar_limite998(int valor) {
    if (valor > LIMITE_998) return LIMITE_998;
    return valor * FACTOR_998;
}
