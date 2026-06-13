// fichero 29158 -- macros y constantes
#define LIMITE_29158 29258
#define FACTOR_29158 4

int aplicar_limite29158(int valor) {
    if (valor > LIMITE_29158) return LIMITE_29158;
    return valor * FACTOR_29158;
}
