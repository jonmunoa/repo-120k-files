// fichero 11086 -- macros y constantes
#define LIMITE_11086 11186
#define FACTOR_11086 2

int aplicar_limite11086(int valor) {
    if (valor > LIMITE_11086) return LIMITE_11086;
    return valor * FACTOR_11086;
}
