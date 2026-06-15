// fichero 15658 -- macros y constantes -- MODIFICADO
#define LIMITE_15658 15858
#define FACTOR_15658 5

int aplicar_limite15658(int valor) {
    if (valor > LIMITE_15658) return LIMITE_15658;
    return valor * FACTOR_15658;
}
