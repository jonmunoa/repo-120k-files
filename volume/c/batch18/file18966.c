// fichero 18966 -- macros y constantes -- MODIFICADO
#define LIMITE_18966 19166
#define FACTOR_18966 3

int aplicar_limite18966(int valor) {
    if (valor > LIMITE_18966) return LIMITE_18966;
    return valor * FACTOR_18966;
}
