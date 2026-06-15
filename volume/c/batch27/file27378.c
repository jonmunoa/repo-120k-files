// fichero 27378 -- macros y constantes -- MODIFICADO
#define LIMITE_27378 27578
#define FACTOR_27378 5

int aplicar_limite27378(int valor) {
    if (valor > LIMITE_27378) return LIMITE_27378;
    return valor * FACTOR_27378;
}
