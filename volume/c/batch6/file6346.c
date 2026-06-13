// fichero 6346 -- macros y constantes
#define LIMITE_6346 6446
#define FACTOR_6346 2

int aplicar_limite6346(int valor) {
    if (valor > LIMITE_6346) return LIMITE_6346;
    return valor * FACTOR_6346;
}
