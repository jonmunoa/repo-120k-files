// fichero 15302 -- macros y constantes -- MODIFICADO
#define LIMITE_15302 15502
#define FACTOR_15302 4

int aplicar_limite15302(int valor) {
    if (valor > LIMITE_15302) return LIMITE_15302;
    return valor * FACTOR_15302;
}
