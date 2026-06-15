// fichero 46954 -- macros y constantes -- MODIFICADO
#define LIMITE_46954 47154
#define FACTOR_46954 6

int aplicar_limite46954(int valor) {
    if (valor > LIMITE_46954) return LIMITE_46954;
    return valor * FACTOR_46954;
}
