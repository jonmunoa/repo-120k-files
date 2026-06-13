// fichero 14286 -- macros y constantes
#define LIMITE_14286 14386
#define FACTOR_14286 2

int aplicar_limite14286(int valor) {
    if (valor > LIMITE_14286) return LIMITE_14286;
    return valor * FACTOR_14286;
}
