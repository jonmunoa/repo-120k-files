// fichero 46998 -- macros y constantes -- MODIFICADO
#define LIMITE_46998 47198
#define FACTOR_46998 5

int aplicar_limite46998(int valor) {
    if (valor > LIMITE_46998) return LIMITE_46998;
    return valor * FACTOR_46998;
}
