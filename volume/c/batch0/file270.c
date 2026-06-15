// fichero 270 -- macros y constantes -- MODIFICADO
#define LIMITE_270 470
#define FACTOR_270 2

int aplicar_limite270(int valor) {
    if (valor > LIMITE_270) return LIMITE_270;
    return valor * FACTOR_270;
}
