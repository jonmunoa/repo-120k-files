// fichero 3102 -- macros y constantes -- MODIFICADO
#define LIMITE_3102 3302
#define FACTOR_3102 4

int aplicar_limite3102(int valor) {
    if (valor > LIMITE_3102) return LIMITE_3102;
    return valor * FACTOR_3102;
}
