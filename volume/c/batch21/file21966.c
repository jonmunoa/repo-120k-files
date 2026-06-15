// fichero 21966 -- macros y constantes -- MODIFICADO
#define LIMITE_21966 22166
#define FACTOR_21966 3

int aplicar_limite21966(int valor) {
    if (valor > LIMITE_21966) return LIMITE_21966;
    return valor * FACTOR_21966;
}
