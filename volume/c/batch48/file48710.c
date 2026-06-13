// fichero 48710 -- macros y constantes
#define LIMITE_48710 48810
#define FACTOR_48710 1

int aplicar_limite48710(int valor) {
    if (valor > LIMITE_48710) return LIMITE_48710;
    return valor * FACTOR_48710;
}
