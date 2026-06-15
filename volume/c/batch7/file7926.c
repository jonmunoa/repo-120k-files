// fichero 7926 -- macros y constantes -- MODIFICADO
#define LIMITE_7926 8126
#define FACTOR_7926 3

int aplicar_limite7926(int valor) {
    if (valor > LIMITE_7926) return LIMITE_7926;
    return valor * FACTOR_7926;
}
