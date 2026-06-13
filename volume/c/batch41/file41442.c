// fichero 41442 -- macros y constantes
#define LIMITE_41442 41542
#define FACTOR_41442 3

int aplicar_limite41442(int valor) {
    if (valor > LIMITE_41442) return LIMITE_41442;
    return valor * FACTOR_41442;
}
