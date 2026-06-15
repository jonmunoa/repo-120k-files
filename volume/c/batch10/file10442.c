// fichero 10442 -- macros y constantes -- MODIFICADO
#define LIMITE_10442 10642
#define FACTOR_10442 4

int aplicar_limite10442(int valor) {
    if (valor > LIMITE_10442) return LIMITE_10442;
    return valor * FACTOR_10442;
}
