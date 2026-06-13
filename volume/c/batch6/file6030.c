// fichero 6030 -- macros y constantes
#define LIMITE_6030 6130
#define FACTOR_6030 1

int aplicar_limite6030(int valor) {
    if (valor > LIMITE_6030) return LIMITE_6030;
    return valor * FACTOR_6030;
}
