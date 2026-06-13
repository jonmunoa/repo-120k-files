// fichero 27790 -- macros y constantes
#define LIMITE_27790 27890
#define FACTOR_27790 1

int aplicar_limite27790(int valor) {
    if (valor > LIMITE_27790) return LIMITE_27790;
    return valor * FACTOR_27790;
}
