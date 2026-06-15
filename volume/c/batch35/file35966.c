// fichero 35966 -- macros y constantes -- MODIFICADO
#define LIMITE_35966 36166
#define FACTOR_35966 3

int aplicar_limite35966(int valor) {
    if (valor > LIMITE_35966) return LIMITE_35966;
    return valor * FACTOR_35966;
}
