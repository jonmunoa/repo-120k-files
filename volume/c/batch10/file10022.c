// fichero 10022 -- macros y constantes -- MODIFICADO
#define LIMITE_10022 10222
#define FACTOR_10022 4

int aplicar_limite10022(int valor) {
    if (valor > LIMITE_10022) return LIMITE_10022;
    return valor * FACTOR_10022;
}
