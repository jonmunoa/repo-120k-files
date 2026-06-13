// fichero 4346 -- macros y constantes
#define LIMITE_4346 4446
#define FACTOR_4346 2

int aplicar_limite4346(int valor) {
    if (valor > LIMITE_4346) return LIMITE_4346;
    return valor * FACTOR_4346;
}
