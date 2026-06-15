// fichero 16030 -- macros y constantes -- MODIFICADO
#define LIMITE_16030 16230
#define FACTOR_16030 2

int aplicar_limite16030(int valor) {
    if (valor > LIMITE_16030) return LIMITE_16030;
    return valor * FACTOR_16030;
}
