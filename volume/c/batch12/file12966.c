// fichero 12966 -- macros y constantes -- MODIFICADO
#define LIMITE_12966 13166
#define FACTOR_12966 3

int aplicar_limite12966(int valor) {
    if (valor > LIMITE_12966) return LIMITE_12966;
    return valor * FACTOR_12966;
}
