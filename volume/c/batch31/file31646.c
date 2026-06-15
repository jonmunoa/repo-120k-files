// fichero 31646 -- macros y constantes -- MODIFICADO
#define LIMITE_31646 31846
#define FACTOR_31646 3

int aplicar_limite31646(int valor) {
    if (valor > LIMITE_31646) return LIMITE_31646;
    return valor * FACTOR_31646;
}
