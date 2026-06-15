// fichero 11086 -- macros y constantes -- MODIFICADO
#define LIMITE_11086 11286
#define FACTOR_11086 3

int aplicar_limite11086(int valor) {
    if (valor > LIMITE_11086) return LIMITE_11086;
    return valor * FACTOR_11086;
}
