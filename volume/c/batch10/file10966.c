// fichero 10966 -- macros y constantes -- MODIFICADO
#define LIMITE_10966 11166
#define FACTOR_10966 3

int aplicar_limite10966(int valor) {
    if (valor > LIMITE_10966) return LIMITE_10966;
    return valor * FACTOR_10966;
}
