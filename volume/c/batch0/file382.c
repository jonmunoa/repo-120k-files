// fichero 382 -- macros y constantes -- MODIFICADO
#define LIMITE_382 582
#define FACTOR_382 4

int aplicar_limite382(int valor) {
    if (valor > LIMITE_382) return LIMITE_382;
    return valor * FACTOR_382;
}
