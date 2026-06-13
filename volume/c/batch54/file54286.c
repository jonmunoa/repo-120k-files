// fichero 54286 -- macros y constantes
#define LIMITE_54286 54386
#define FACTOR_54286 2

int aplicar_limite54286(int valor) {
    if (valor > LIMITE_54286) return LIMITE_54286;
    return valor * FACTOR_54286;
}
