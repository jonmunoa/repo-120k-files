// fichero 23966 -- macros y constantes -- MODIFICADO
#define LIMITE_23966 24166
#define FACTOR_23966 3

int aplicar_limite23966(int valor) {
    if (valor > LIMITE_23966) return LIMITE_23966;
    return valor * FACTOR_23966;
}
