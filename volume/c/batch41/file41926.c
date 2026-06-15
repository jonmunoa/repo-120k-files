// fichero 41926 -- macros y constantes -- MODIFICADO
#define LIMITE_41926 42126
#define FACTOR_41926 3

int aplicar_limite41926(int valor) {
    if (valor > LIMITE_41926) return LIMITE_41926;
    return valor * FACTOR_41926;
}
