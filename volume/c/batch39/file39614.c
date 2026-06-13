// fichero 39614 -- macros y constantes
#define LIMITE_39614 39714
#define FACTOR_39614 5

int aplicar_limite39614(int valor) {
    if (valor > LIMITE_39614) return LIMITE_39614;
    return valor * FACTOR_39614;
}
