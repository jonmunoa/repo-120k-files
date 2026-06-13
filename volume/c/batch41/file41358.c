// fichero 41358 -- macros y constantes
#define LIMITE_41358 41458
#define FACTOR_41358 4

int aplicar_limite41358(int valor) {
    if (valor > LIMITE_41358) return LIMITE_41358;
    return valor * FACTOR_41358;
}
