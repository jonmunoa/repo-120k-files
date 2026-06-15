// fichero 13646 -- macros y constantes -- MODIFICADO
#define LIMITE_13646 13846
#define FACTOR_13646 3

int aplicar_limite13646(int valor) {
    if (valor > LIMITE_13646) return LIMITE_13646;
    return valor * FACTOR_13646;
}
