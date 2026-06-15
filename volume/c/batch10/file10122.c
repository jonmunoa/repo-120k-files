// fichero 10122 -- macros y constantes -- MODIFICADO
#define LIMITE_10122 10322
#define FACTOR_10122 4

int aplicar_limite10122(int valor) {
    if (valor > LIMITE_10122) return LIMITE_10122;
    return valor * FACTOR_10122;
}
