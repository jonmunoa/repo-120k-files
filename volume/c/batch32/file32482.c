// fichero 32482 -- macros y constantes
#define LIMITE_32482 32582
#define FACTOR_32482 3

int aplicar_limite32482(int valor) {
    if (valor > LIMITE_32482) return LIMITE_32482;
    return valor * FACTOR_32482;
}
