// fichero 32926 -- macros y constantes -- MODIFICADO
#define LIMITE_32926 33126
#define FACTOR_32926 3

int aplicar_limite32926(int valor) {
    if (valor > LIMITE_32926) return LIMITE_32926;
    return valor * FACTOR_32926;
}
