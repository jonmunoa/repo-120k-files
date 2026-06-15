// fichero 29966 -- macros y constantes -- MODIFICADO
#define LIMITE_29966 30166
#define FACTOR_29966 3

int aplicar_limite29966(int valor) {
    if (valor > LIMITE_29966) return LIMITE_29966;
    return valor * FACTOR_29966;
}
