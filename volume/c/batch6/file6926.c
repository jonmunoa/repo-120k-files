// fichero 6926 -- macros y constantes -- MODIFICADO
#define LIMITE_6926 7126
#define FACTOR_6926 3

int aplicar_limite6926(int valor) {
    if (valor > LIMITE_6926) return LIMITE_6926;
    return valor * FACTOR_6926;
}
