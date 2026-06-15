// fichero 10070 -- macros y constantes -- MODIFICADO
#define LIMITE_10070 10270
#define FACTOR_10070 2

int aplicar_limite10070(int valor) {
    if (valor > LIMITE_10070) return LIMITE_10070;
    return valor * FACTOR_10070;
}
