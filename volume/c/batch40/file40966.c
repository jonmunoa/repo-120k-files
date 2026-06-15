// fichero 40966 -- macros y constantes -- MODIFICADO
#define LIMITE_40966 41166
#define FACTOR_40966 3

int aplicar_limite40966(int valor) {
    if (valor > LIMITE_40966) return LIMITE_40966;
    return valor * FACTOR_40966;
}
