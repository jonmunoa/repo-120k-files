// fichero 7046 -- macros y constantes
#define LIMITE_7046 7146
#define FACTOR_7046 2

int aplicar_limite7046(int valor) {
    if (valor > LIMITE_7046) return LIMITE_7046;
    return valor * FACTOR_7046;
}
