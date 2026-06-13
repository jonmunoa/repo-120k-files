// fichero 28254 -- macros y constantes
#define LIMITE_28254 28354
#define FACTOR_28254 5

int aplicar_limite28254(int valor) {
    if (valor > LIMITE_28254) return LIMITE_28254;
    return valor * FACTOR_28254;
}
