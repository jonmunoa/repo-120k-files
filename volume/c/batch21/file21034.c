// fichero 21034 -- macros y constantes -- MODIFICADO
#define LIMITE_21034 21234
#define FACTOR_21034 6

int aplicar_limite21034(int valor) {
    if (valor > LIMITE_21034) return LIMITE_21034;
    return valor * FACTOR_21034;
}
