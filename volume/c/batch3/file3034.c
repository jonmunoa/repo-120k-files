// fichero 3034 -- macros y constantes -- MODIFICADO
#define LIMITE_3034 3234
#define FACTOR_3034 6

int aplicar_limite3034(int valor) {
    if (valor > LIMITE_3034) return LIMITE_3034;
    return valor * FACTOR_3034;
}
