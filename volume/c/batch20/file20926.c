// fichero 20926 -- macros y constantes -- MODIFICADO
#define LIMITE_20926 21126
#define FACTOR_20926 3

int aplicar_limite20926(int valor) {
    if (valor > LIMITE_20926) return LIMITE_20926;
    return valor * FACTOR_20926;
}
