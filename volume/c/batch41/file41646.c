// fichero 41646 -- macros y constantes
#define LIMITE_41646 41746
#define FACTOR_41646 2

int aplicar_limite41646(int valor) {
    if (valor > LIMITE_41646) return LIMITE_41646;
    return valor * FACTOR_41646;
}
