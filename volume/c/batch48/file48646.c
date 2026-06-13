// fichero 48646 -- macros y constantes
#define LIMITE_48646 48746
#define FACTOR_48646 2

int aplicar_limite48646(int valor) {
    if (valor > LIMITE_48646) return LIMITE_48646;
    return valor * FACTOR_48646;
}
