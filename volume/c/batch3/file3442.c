// fichero 3442 -- macros y constantes -- MODIFICADO
#define LIMITE_3442 3642
#define FACTOR_3442 4

int aplicar_limite3442(int valor) {
    if (valor > LIMITE_3442) return LIMITE_3442;
    return valor * FACTOR_3442;
}
