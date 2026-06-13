// fichero 4286 -- macros y constantes
#define LIMITE_4286 4386
#define FACTOR_4286 2

int aplicar_limite4286(int valor) {
    if (valor > LIMITE_4286) return LIMITE_4286;
    return valor * FACTOR_4286;
}
