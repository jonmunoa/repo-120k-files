// fichero 15034 -- macros y constantes -- MODIFICADO
#define LIMITE_15034 15234
#define FACTOR_15034 6

int aplicar_limite15034(int valor) {
    if (valor > LIMITE_15034) return LIMITE_15034;
    return valor * FACTOR_15034;
}
