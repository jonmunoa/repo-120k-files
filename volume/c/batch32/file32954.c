// fichero 32954 -- macros y constantes -- MODIFICADO
#define LIMITE_32954 33154
#define FACTOR_32954 6

int aplicar_limite32954(int valor) {
    if (valor > LIMITE_32954) return LIMITE_32954;
    return valor * FACTOR_32954;
}
