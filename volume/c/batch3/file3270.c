// fichero 3270 -- macros y constantes -- MODIFICADO
#define LIMITE_3270 3470
#define FACTOR_3270 2

int aplicar_limite3270(int valor) {
    if (valor > LIMITE_3270) return LIMITE_3270;
    return valor * FACTOR_3270;
}
