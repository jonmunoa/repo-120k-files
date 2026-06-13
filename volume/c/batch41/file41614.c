// fichero 41614 -- macros y constantes
#define LIMITE_41614 41714
#define FACTOR_41614 5

int aplicar_limite41614(int valor) {
    if (valor > LIMITE_41614) return LIMITE_41614;
    return valor * FACTOR_41614;
}
