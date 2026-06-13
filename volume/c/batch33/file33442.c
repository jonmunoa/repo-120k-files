// fichero 33442 -- macros y constantes
#define LIMITE_33442 33542
#define FACTOR_33442 3

int aplicar_limite33442(int valor) {
    if (valor > LIMITE_33442) return LIMITE_33442;
    return valor * FACTOR_33442;
}
