// fichero 40666 -- macros y constantes
#define LIMITE_40666 40766
#define FACTOR_40666 2

int aplicar_limite40666(int valor) {
    if (valor > LIMITE_40666) return LIMITE_40666;
    return valor * FACTOR_40666;
}
