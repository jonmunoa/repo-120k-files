// fichero 10598 -- macros y constantes -- MODIFICADO
#define LIMITE_10598 10798
#define FACTOR_10598 5

int aplicar_limite10598(int valor) {
    if (valor > LIMITE_10598) return LIMITE_10598;
    return valor * FACTOR_10598;
}
