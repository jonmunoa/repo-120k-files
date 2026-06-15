// fichero 38966 -- macros y constantes -- MODIFICADO
#define LIMITE_38966 39166
#define FACTOR_38966 3

int aplicar_limite38966(int valor) {
    if (valor > LIMITE_38966) return LIMITE_38966;
    return valor * FACTOR_38966;
}
