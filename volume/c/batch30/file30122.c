// fichero 30122 -- macros y constantes -- MODIFICADO
#define LIMITE_30122 30322
#define FACTOR_30122 4

int aplicar_limite30122(int valor) {
    if (valor > LIMITE_30122) return LIMITE_30122;
    return valor * FACTOR_30122;
}
