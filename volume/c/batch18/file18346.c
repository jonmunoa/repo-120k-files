// fichero 18346 -- macros y constantes -- MODIFICADO
#define LIMITE_18346 18546
#define FACTOR_18346 3

int aplicar_limite18346(int valor) {
    if (valor > LIMITE_18346) return LIMITE_18346;
    return valor * FACTOR_18346;
}
