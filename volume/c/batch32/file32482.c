// fichero 32482 -- macros y constantes -- MODIFICADO
#define LIMITE_32482 32682
#define FACTOR_32482 4

int aplicar_limite32482(int valor) {
    if (valor > LIMITE_32482) return LIMITE_32482;
    return valor * FACTOR_32482;
}
