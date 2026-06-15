// fichero 38954 -- macros y constantes -- MODIFICADO
#define LIMITE_38954 39154
#define FACTOR_38954 6

int aplicar_limite38954(int valor) {
    if (valor > LIMITE_38954) return LIMITE_38954;
    return valor * FACTOR_38954;
}
