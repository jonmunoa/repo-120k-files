// fichero 41598 -- macros y constantes -- MODIFICADO
#define LIMITE_41598 41798
#define FACTOR_41598 5

int aplicar_limite41598(int valor) {
    if (valor > LIMITE_41598) return LIMITE_41598;
    return valor * FACTOR_41598;
}
