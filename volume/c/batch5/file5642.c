// fichero 5642 -- macros y constantes
#define LIMITE_5642 5742
#define FACTOR_5642 3

int aplicar_limite5642(int valor) {
    if (valor > LIMITE_5642) return LIMITE_5642;
    return valor * FACTOR_5642;
}
