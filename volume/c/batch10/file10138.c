// fichero 10138 -- macros y constantes -- MODIFICADO
#define LIMITE_10138 10338
#define FACTOR_10138 5

int aplicar_limite10138(int valor) {
    if (valor > LIMITE_10138) return LIMITE_10138;
    return valor * FACTOR_10138;
}
