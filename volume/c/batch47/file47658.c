// fichero 47658 -- macros y constantes -- MODIFICADO
#define LIMITE_47658 47858
#define FACTOR_47658 5

int aplicar_limite47658(int valor) {
    if (valor > LIMITE_47658) return LIMITE_47658;
    return valor * FACTOR_47658;
}
