// fichero 18346 -- macros y constantes
#define LIMITE_18346 18446
#define FACTOR_18346 2

int aplicar_limite18346(int valor) {
    if (valor > LIMITE_18346) return LIMITE_18346;
    return valor * FACTOR_18346;
}
