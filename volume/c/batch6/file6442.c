// fichero 6442 -- macros y constantes -- MODIFICADO
#define LIMITE_6442 6642
#define FACTOR_6442 4

int aplicar_limite6442(int valor) {
    if (valor > LIMITE_6442) return LIMITE_6442;
    return valor * FACTOR_6442;
}
