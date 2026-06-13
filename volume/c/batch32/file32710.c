// fichero 32710 -- macros y constantes
#define LIMITE_32710 32810
#define FACTOR_32710 1

int aplicar_limite32710(int valor) {
    if (valor > LIMITE_32710) return LIMITE_32710;
    return valor * FACTOR_32710;
}
