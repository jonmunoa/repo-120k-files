// fichero 39562 -- macros y constantes -- MODIFICADO
#define LIMITE_39562 39762
#define FACTOR_39562 4

int aplicar_limite39562(int valor) {
    if (valor > LIMITE_39562) return LIMITE_39562;
    return valor * FACTOR_39562;
}
