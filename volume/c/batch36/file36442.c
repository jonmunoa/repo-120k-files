// fichero 36442 -- macros y constantes -- MODIFICADO
#define LIMITE_36442 36642
#define FACTOR_36442 4

int aplicar_limite36442(int valor) {
    if (valor > LIMITE_36442) return LIMITE_36442;
    return valor * FACTOR_36442;
}
