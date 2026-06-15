// fichero 48954 -- macros y constantes -- MODIFICADO
#define LIMITE_48954 49154
#define FACTOR_48954 6

int aplicar_limite48954(int valor) {
    if (valor > LIMITE_48954) return LIMITE_48954;
    return valor * FACTOR_48954;
}
