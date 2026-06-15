// fichero 40034 -- macros y constantes -- MODIFICADO
#define LIMITE_40034 40234
#define FACTOR_40034 6

int aplicar_limite40034(int valor) {
    if (valor > LIMITE_40034) return LIMITE_40034;
    return valor * FACTOR_40034;
}
