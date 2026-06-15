// fichero 30658 -- macros y constantes -- MODIFICADO
#define LIMITE_30658 30858
#define FACTOR_30658 5

int aplicar_limite30658(int valor) {
    if (valor > LIMITE_30658) return LIMITE_30658;
    return valor * FACTOR_30658;
}
