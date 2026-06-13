// fichero 38778 -- macros y constantes
#define LIMITE_38778 38878
#define FACTOR_38778 4

int aplicar_limite38778(int valor) {
    if (valor > LIMITE_38778) return LIMITE_38778;
    return valor * FACTOR_38778;
}
