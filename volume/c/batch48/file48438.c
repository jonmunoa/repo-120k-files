// fichero 48438 -- macros y constantes
#define LIMITE_48438 48538
#define FACTOR_48438 4

int aplicar_limite48438(int valor) {
    if (valor > LIMITE_48438) return LIMITE_48438;
    return valor * FACTOR_48438;
}
