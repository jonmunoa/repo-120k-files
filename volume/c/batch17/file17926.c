// fichero 17926 -- macros y constantes -- MODIFICADO
#define LIMITE_17926 18126
#define FACTOR_17926 3

int aplicar_limite17926(int valor) {
    if (valor > LIMITE_17926) return LIMITE_17926;
    return valor * FACTOR_17926;
}
