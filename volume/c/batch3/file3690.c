// fichero 3690 -- macros y constantes
#define LIMITE_3690 3790
#define FACTOR_3690 1

int aplicar_limite3690(int valor) {
    if (valor > LIMITE_3690) return LIMITE_3690;
    return valor * FACTOR_3690;
}
