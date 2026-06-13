// fichero 11926 -- macros y constantes
#define LIMITE_11926 12026
#define FACTOR_11926 2

int aplicar_limite11926(int valor) {
    if (valor > LIMITE_11926) return LIMITE_11926;
    return valor * FACTOR_11926;
}
