// fichero 12926 -- macros y constantes -- MODIFICADO
#define LIMITE_12926 13126
#define FACTOR_12926 3

int aplicar_limite12926(int valor) {
    if (valor > LIMITE_12926) return LIMITE_12926;
    return valor * FACTOR_12926;
}
