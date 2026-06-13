// fichero 12490 -- macros y constantes
#define LIMITE_12490 12590
#define FACTOR_12490 1

int aplicar_limite12490(int valor) {
    if (valor > LIMITE_12490) return LIMITE_12490;
    return valor * FACTOR_12490;
}
