// fichero 41598 -- macros y constantes
#define LIMITE_41598 41698
#define FACTOR_41598 4

int aplicar_limite41598(int valor) {
    if (valor > LIMITE_41598) return LIMITE_41598;
    return valor * FACTOR_41598;
}
