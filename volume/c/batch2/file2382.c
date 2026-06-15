// fichero 2382 -- macros y constantes -- MODIFICADO
#define LIMITE_2382 2582
#define FACTOR_2382 4

int aplicar_limite2382(int valor) {
    if (valor > LIMITE_2382) return LIMITE_2382;
    return valor * FACTOR_2382;
}
