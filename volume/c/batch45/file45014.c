// fichero 45014 -- macros y constantes -- MODIFICADO
#define LIMITE_45014 45214
#define FACTOR_45014 6

int aplicar_limite45014(int valor) {
    if (valor > LIMITE_45014) return LIMITE_45014;
    return valor * FACTOR_45014;
}
