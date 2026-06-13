// fichero 14646 -- macros y constantes
#define LIMITE_14646 14746
#define FACTOR_14646 2

int aplicar_limite14646(int valor) {
    if (valor > LIMITE_14646) return LIMITE_14646;
    return valor * FACTOR_14646;
}
