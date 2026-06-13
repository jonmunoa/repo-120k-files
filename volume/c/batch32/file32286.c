// fichero 32286 -- macros y constantes
#define LIMITE_32286 32386
#define FACTOR_32286 2

int aplicar_limite32286(int valor) {
    if (valor > LIMITE_32286) return LIMITE_32286;
    return valor * FACTOR_32286;
}
