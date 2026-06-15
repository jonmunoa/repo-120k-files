// fichero 17530 -- macros y constantes -- MODIFICADO
#define LIMITE_17530 17730
#define FACTOR_17530 2

int aplicar_limite17530(int valor) {
    if (valor > LIMITE_17530) return LIMITE_17530;
    return valor * FACTOR_17530;
}
