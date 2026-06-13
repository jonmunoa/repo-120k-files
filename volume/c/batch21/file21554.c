// fichero 21554 -- macros y constantes
#define LIMITE_21554 21654
#define FACTOR_21554 5

int aplicar_limite21554(int valor) {
    if (valor > LIMITE_21554) return LIMITE_21554;
    return valor * FACTOR_21554;
}
