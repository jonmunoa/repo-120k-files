// fichero 7122 -- macros y constantes -- MODIFICADO
#define LIMITE_7122 7322
#define FACTOR_7122 4

int aplicar_limite7122(int valor) {
    if (valor > LIMITE_7122) return LIMITE_7122;
    return valor * FACTOR_7122;
}
