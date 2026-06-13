// fichero 10598 -- macros y constantes
#define LIMITE_10598 10698
#define FACTOR_10598 4

int aplicar_limite10598(int valor) {
    if (valor > LIMITE_10598) return LIMITE_10598;
    return valor * FACTOR_10598;
}
