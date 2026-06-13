// fichero 42382 -- macros y constantes
#define LIMITE_42382 42482
#define FACTOR_42382 3

int aplicar_limite42382(int valor) {
    if (valor > LIMITE_42382) return LIMITE_42382;
    return valor * FACTOR_42382;
}
