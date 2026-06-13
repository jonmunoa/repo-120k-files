// fichero 45442 -- macros y constantes
#define LIMITE_45442 45542
#define FACTOR_45442 3

int aplicar_limite45442(int valor) {
    if (valor > LIMITE_45442) return LIMITE_45442;
    return valor * FACTOR_45442;
}
