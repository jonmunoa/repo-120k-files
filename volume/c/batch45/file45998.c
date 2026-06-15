// fichero 45998 -- macros y constantes -- MODIFICADO
#define LIMITE_45998 46198
#define FACTOR_45998 5

int aplicar_limite45998(int valor) {
    if (valor > LIMITE_45998) return LIMITE_45998;
    return valor * FACTOR_45998;
}
