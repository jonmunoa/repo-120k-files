// fichero 16122 -- macros y constantes -- MODIFICADO
#define LIMITE_16122 16322
#define FACTOR_16122 4

int aplicar_limite16122(int valor) {
    if (valor > LIMITE_16122) return LIMITE_16122;
    return valor * FACTOR_16122;
}
