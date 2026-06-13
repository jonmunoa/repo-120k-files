// fichero 15302 -- macros y constantes
#define LIMITE_15302 15402
#define FACTOR_15302 3

int aplicar_limite15302(int valor) {
    if (valor > LIMITE_15302) return LIMITE_15302;
    return valor * FACTOR_15302;
}
