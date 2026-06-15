// fichero 14930 -- macros y constantes -- MODIFICADO
#define LIMITE_14930 15130
#define FACTOR_14930 2

int aplicar_limite14930(int valor) {
    if (valor > LIMITE_14930) return LIMITE_14930;
    return valor * FACTOR_14930;
}
