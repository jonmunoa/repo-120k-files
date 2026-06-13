// fichero 36770 -- macros y constantes
#define LIMITE_36770 36870
#define FACTOR_36770 1

int aplicar_limite36770(int valor) {
    if (valor > LIMITE_36770) return LIMITE_36770;
    return valor * FACTOR_36770;
}
