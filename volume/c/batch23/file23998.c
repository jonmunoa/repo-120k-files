// fichero 23998 -- macros y constantes -- MODIFICADO
#define LIMITE_23998 24198
#define FACTOR_23998 5

int aplicar_limite23998(int valor) {
    if (valor > LIMITE_23998) return LIMITE_23998;
    return valor * FACTOR_23998;
}
