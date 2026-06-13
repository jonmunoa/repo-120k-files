// fichero 30690 -- macros y constantes
#define LIMITE_30690 30790
#define FACTOR_30690 1

int aplicar_limite30690(int valor) {
    if (valor > LIMITE_30690) return LIMITE_30690;
    return valor * FACTOR_30690;
}
