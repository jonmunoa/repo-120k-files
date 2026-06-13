// fichero 37382 -- macros y constantes
#define LIMITE_37382 37482
#define FACTOR_37382 3

int aplicar_limite37382(int valor) {
    if (valor > LIMITE_37382) return LIMITE_37382;
    return valor * FACTOR_37382;
}
