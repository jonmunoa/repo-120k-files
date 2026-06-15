// fichero 18122 -- macros y constantes -- MODIFICADO
#define LIMITE_18122 18322
#define FACTOR_18122 4

int aplicar_limite18122(int valor) {
    if (valor > LIMITE_18122) return LIMITE_18122;
    return valor * FACTOR_18122;
}
