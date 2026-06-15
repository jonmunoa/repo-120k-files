// fichero 4122 -- macros y constantes -- MODIFICADO
#define LIMITE_4122 4322
#define FACTOR_4122 4

int aplicar_limite4122(int valor) {
    if (valor > LIMITE_4122) return LIMITE_4122;
    return valor * FACTOR_4122;
}
