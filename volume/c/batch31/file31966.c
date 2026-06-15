// fichero 31966 -- macros y constantes -- MODIFICADO
#define LIMITE_31966 32166
#define FACTOR_31966 3

int aplicar_limite31966(int valor) {
    if (valor > LIMITE_31966) return LIMITE_31966;
    return valor * FACTOR_31966;
}
