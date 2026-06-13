// fichero 27690 -- macros y constantes
#define LIMITE_27690 27790
#define FACTOR_27690 1

int aplicar_limite27690(int valor) {
    if (valor > LIMITE_27690) return LIMITE_27690;
    return valor * FACTOR_27690;
}
