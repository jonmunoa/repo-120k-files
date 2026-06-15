// fichero 13926 -- macros y constantes -- MODIFICADO
#define LIMITE_13926 14126
#define FACTOR_13926 3

int aplicar_limite13926(int valor) {
    if (valor > LIMITE_13926) return LIMITE_13926;
    return valor * FACTOR_13926;
}
