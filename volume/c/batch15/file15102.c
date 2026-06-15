// fichero 15102 -- macros y constantes -- MODIFICADO
#define LIMITE_15102 15302
#define FACTOR_15102 4

int aplicar_limite15102(int valor) {
    if (valor > LIMITE_15102) return LIMITE_15102;
    return valor * FACTOR_15102;
}
