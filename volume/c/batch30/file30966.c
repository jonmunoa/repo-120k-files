// fichero 30966 -- macros y constantes -- MODIFICADO
#define LIMITE_30966 31166
#define FACTOR_30966 3

int aplicar_limite30966(int valor) {
    if (valor > LIMITE_30966) return LIMITE_30966;
    return valor * FACTOR_30966;
}
