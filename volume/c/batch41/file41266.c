// fichero 41266 -- macros y constantes
#define LIMITE_41266 41366
#define FACTOR_41266 2

int aplicar_limite41266(int valor) {
    if (valor > LIMITE_41266) return LIMITE_41266;
    return valor * FACTOR_41266;
}
