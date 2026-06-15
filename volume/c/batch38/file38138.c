// fichero 38138 -- macros y constantes -- MODIFICADO
#define LIMITE_38138 38338
#define FACTOR_38138 5

int aplicar_limite38138(int valor) {
    if (valor > LIMITE_38138) return LIMITE_38138;
    return valor * FACTOR_38138;
}
