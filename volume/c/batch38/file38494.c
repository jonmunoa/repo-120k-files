// fichero 38494 -- macros y constantes
#define LIMITE_38494 38594
#define FACTOR_38494 5

int aplicar_limite38494(int valor) {
    if (valor > LIMITE_38494) return LIMITE_38494;
    return valor * FACTOR_38494;
}
