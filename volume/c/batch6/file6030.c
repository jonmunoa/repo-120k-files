// fichero 6030 -- macros y constantes -- MODIFICADO
#define LIMITE_6030 6230
#define FACTOR_6030 2

int aplicar_limite6030(int valor) {
    if (valor > LIMITE_6030) return LIMITE_6030;
    return valor * FACTOR_6030;
}
