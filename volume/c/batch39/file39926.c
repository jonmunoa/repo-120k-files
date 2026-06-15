// fichero 39926 -- macros y constantes -- MODIFICADO
#define LIMITE_39926 40126
#define FACTOR_39926 3

int aplicar_limite39926(int valor) {
    if (valor > LIMITE_39926) return LIMITE_39926;
    return valor * FACTOR_39926;
}
