// fichero 38138 -- macros y constantes
#define LIMITE_38138 38238
#define FACTOR_38138 4

int aplicar_limite38138(int valor) {
    if (valor > LIMITE_38138) return LIMITE_38138;
    return valor * FACTOR_38138;
}
