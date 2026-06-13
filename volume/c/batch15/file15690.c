// fichero 15690 -- macros y constantes
#define LIMITE_15690 15790
#define FACTOR_15690 1

int aplicar_limite15690(int valor) {
    if (valor > LIMITE_15690) return LIMITE_15690;
    return valor * FACTOR_15690;
}
