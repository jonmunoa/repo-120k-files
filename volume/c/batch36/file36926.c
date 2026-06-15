// fichero 36926 -- macros y constantes -- MODIFICADO
#define LIMITE_36926 37126
#define FACTOR_36926 3

int aplicar_limite36926(int valor) {
    if (valor > LIMITE_36926) return LIMITE_36926;
    return valor * FACTOR_36926;
}
