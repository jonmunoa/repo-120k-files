// fichero 36954 -- macros y constantes -- MODIFICADO
#define LIMITE_36954 37154
#define FACTOR_36954 6

int aplicar_limite36954(int valor) {
    if (valor > LIMITE_36954) return LIMITE_36954;
    return valor * FACTOR_36954;
}
