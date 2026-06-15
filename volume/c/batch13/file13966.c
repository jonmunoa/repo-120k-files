// fichero 13966 -- macros y constantes -- MODIFICADO
#define LIMITE_13966 14166
#define FACTOR_13966 3

int aplicar_limite13966(int valor) {
    if (valor > LIMITE_13966) return LIMITE_13966;
    return valor * FACTOR_13966;
}
