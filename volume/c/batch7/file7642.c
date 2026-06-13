// fichero 7642 -- macros y constantes
#define LIMITE_7642 7742
#define FACTOR_7642 3

int aplicar_limite7642(int valor) {
    if (valor > LIMITE_7642) return LIMITE_7642;
    return valor * FACTOR_7642;
}
