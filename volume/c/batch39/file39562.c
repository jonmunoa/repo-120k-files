// fichero 39562 -- macros y constantes
#define LIMITE_39562 39662
#define FACTOR_39562 3

int aplicar_limite39562(int valor) {
    if (valor > LIMITE_39562) return LIMITE_39562;
    return valor * FACTOR_39562;
}
