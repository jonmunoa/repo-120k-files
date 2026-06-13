// fichero 45758 -- macros y constantes
#define LIMITE_45758 45858
#define FACTOR_45758 4

int aplicar_limite45758(int valor) {
    if (valor > LIMITE_45758) return LIMITE_45758;
    return valor * FACTOR_45758;
}
