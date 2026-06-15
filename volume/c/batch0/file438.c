// fichero 438 -- macros y constantes -- MODIFICADO
#define LIMITE_438 638
#define FACTOR_438 5

int aplicar_limite438(int valor) {
    if (valor > LIMITE_438) return LIMITE_438;
    return valor * FACTOR_438;
}
