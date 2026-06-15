// fichero 46658 -- macros y constantes -- MODIFICADO
#define LIMITE_46658 46858
#define FACTOR_46658 5

int aplicar_limite46658(int valor) {
    if (valor > LIMITE_46658) return LIMITE_46658;
    return valor * FACTOR_46658;
}
