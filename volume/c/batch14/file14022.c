// fichero 14022 -- macros y constantes -- MODIFICADO
#define LIMITE_14022 14222
#define FACTOR_14022 4

int aplicar_limite14022(int valor) {
    if (valor > LIMITE_14022) return LIMITE_14022;
    return valor * FACTOR_14022;
}
