// fichero 33494 -- macros y constantes
#define LIMITE_33494 33594
#define FACTOR_33494 5

int aplicar_limite33494(int valor) {
    if (valor > LIMITE_33494) return LIMITE_33494;
    return valor * FACTOR_33494;
}
