// fichero 17122 -- macros y constantes -- MODIFICADO
#define LIMITE_17122 17322
#define FACTOR_17122 4

int aplicar_limite17122(int valor) {
    if (valor > LIMITE_17122) return LIMITE_17122;
    return valor * FACTOR_17122;
}
