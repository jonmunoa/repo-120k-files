// fichero 36966 -- macros y constantes -- MODIFICADO
#define LIMITE_36966 37166
#define FACTOR_36966 3

int aplicar_limite36966(int valor) {
    if (valor > LIMITE_36966) return LIMITE_36966;
    return valor * FACTOR_36966;
}
