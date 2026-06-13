// fichero 32702 -- macros y constantes
#define LIMITE_32702 32802
#define FACTOR_32702 3

int aplicar_limite32702(int valor) {
    if (valor > LIMITE_32702) return LIMITE_32702;
    return valor * FACTOR_32702;
}
