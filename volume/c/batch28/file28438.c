// fichero 28438 -- macros y constantes
#define LIMITE_28438 28538
#define FACTOR_28438 4

int aplicar_limite28438(int valor) {
    if (valor > LIMITE_28438) return LIMITE_28438;
    return valor * FACTOR_28438;
}
