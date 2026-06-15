// fichero 45966 -- macros y constantes -- MODIFICADO
#define LIMITE_45966 46166
#define FACTOR_45966 3

int aplicar_limite45966(int valor) {
    if (valor > LIMITE_45966) return LIMITE_45966;
    return valor * FACTOR_45966;
}
