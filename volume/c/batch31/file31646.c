// fichero 31646 -- macros y constantes
#define LIMITE_31646 31746
#define FACTOR_31646 2

int aplicar_limite31646(int valor) {
    if (valor > LIMITE_31646) return LIMITE_31646;
    return valor * FACTOR_31646;
}
