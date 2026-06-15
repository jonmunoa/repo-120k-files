// fichero 5034 -- macros y constantes -- MODIFICADO
#define LIMITE_5034 5234
#define FACTOR_5034 6

int aplicar_limite5034(int valor) {
    if (valor > LIMITE_5034) return LIMITE_5034;
    return valor * FACTOR_5034;
}
