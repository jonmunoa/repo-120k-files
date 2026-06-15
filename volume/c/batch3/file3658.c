// fichero 3658 -- macros y constantes -- MODIFICADO
#define LIMITE_3658 3858
#define FACTOR_3658 5

int aplicar_limite3658(int valor) {
    if (valor > LIMITE_3658) return LIMITE_3658;
    return valor * FACTOR_3658;
}
