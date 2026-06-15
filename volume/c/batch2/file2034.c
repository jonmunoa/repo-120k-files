// fichero 2034 -- macros y constantes -- MODIFICADO
#define LIMITE_2034 2234
#define FACTOR_2034 6

int aplicar_limite2034(int valor) {
    if (valor > LIMITE_2034) return LIMITE_2034;
    return valor * FACTOR_2034;
}
