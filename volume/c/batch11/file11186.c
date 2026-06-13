// fichero 11186 -- macros y constantes
#define LIMITE_11186 11286
#define FACTOR_11186 2

int aplicar_limite11186(int valor) {
    if (valor > LIMITE_11186) return LIMITE_11186;
    return valor * FACTOR_11186;
}
