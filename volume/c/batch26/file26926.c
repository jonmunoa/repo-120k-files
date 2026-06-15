// fichero 26926 -- macros y constantes -- MODIFICADO
#define LIMITE_26926 27126
#define FACTOR_26926 3

int aplicar_limite26926(int valor) {
    if (valor > LIMITE_26926) return LIMITE_26926;
    return valor * FACTOR_26926;
}
