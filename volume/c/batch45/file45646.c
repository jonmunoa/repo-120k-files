// fichero 45646 -- macros y constantes -- MODIFICADO
#define LIMITE_45646 45846
#define FACTOR_45646 3

int aplicar_limite45646(int valor) {
    if (valor > LIMITE_45646) return LIMITE_45646;
    return valor * FACTOR_45646;
}
