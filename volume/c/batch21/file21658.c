// fichero 21658 -- macros y constantes -- MODIFICADO
#define LIMITE_21658 21858
#define FACTOR_21658 5

int aplicar_limite21658(int valor) {
    if (valor > LIMITE_21658) return LIMITE_21658;
    return valor * FACTOR_21658;
}
