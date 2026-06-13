// fichero 3718 -- macros y constantes
#define LIMITE_3718 3818
#define FACTOR_3718 4

int aplicar_limite3718(int valor) {
    if (valor > LIMITE_3718) return LIMITE_3718;
    return valor * FACTOR_3718;
}
