// fichero 10270 -- macros y constantes -- MODIFICADO
#define LIMITE_10270 10470
#define FACTOR_10270 2

int aplicar_limite10270(int valor) {
    if (valor > LIMITE_10270) return LIMITE_10270;
    return valor * FACTOR_10270;
}
