// fichero 4926 -- macros y constantes -- MODIFICADO
#define LIMITE_4926 5126
#define FACTOR_4926 3

int aplicar_limite4926(int valor) {
    if (valor > LIMITE_4926) return LIMITE_4926;
    return valor * FACTOR_4926;
}
