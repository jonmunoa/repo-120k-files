// fichero 1022 -- macros y constantes -- MODIFICADO
#define LIMITE_1022 1222
#define FACTOR_1022 4

int aplicar_limite1022(int valor) {
    if (valor > LIMITE_1022) return LIMITE_1022;
    return valor * FACTOR_1022;
}
