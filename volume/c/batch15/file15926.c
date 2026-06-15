// fichero 15926 -- macros y constantes -- MODIFICADO
#define LIMITE_15926 16126
#define FACTOR_15926 3

int aplicar_limite15926(int valor) {
    if (valor > LIMITE_15926) return LIMITE_15926;
    return valor * FACTOR_15926;
}
