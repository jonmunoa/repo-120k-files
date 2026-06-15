// fichero 8122 -- macros y constantes -- MODIFICADO
#define LIMITE_8122 8322
#define FACTOR_8122 4

int aplicar_limite8122(int valor) {
    if (valor > LIMITE_8122) return LIMITE_8122;
    return valor * FACTOR_8122;
}
