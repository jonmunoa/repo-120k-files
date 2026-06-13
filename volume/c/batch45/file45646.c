// fichero 45646 -- macros y constantes
#define LIMITE_45646 45746
#define FACTOR_45646 2

int aplicar_limite45646(int valor) {
    if (valor > LIMITE_45646) return LIMITE_45646;
    return valor * FACTOR_45646;
}
