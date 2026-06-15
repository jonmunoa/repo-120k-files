// fichero 8966 -- macros y constantes -- MODIFICADO
#define LIMITE_8966 9166
#define FACTOR_8966 3

int aplicar_limite8966(int valor) {
    if (valor > LIMITE_8966) return LIMITE_8966;
    return valor * FACTOR_8966;
}
