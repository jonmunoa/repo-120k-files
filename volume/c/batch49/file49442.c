// fichero 49442 -- macros y constantes
#define LIMITE_49442 49542
#define FACTOR_49442 3

int aplicar_limite49442(int valor) {
    if (valor > LIMITE_49442) return LIMITE_49442;
    return valor * FACTOR_49442;
}
