// fichero 4046 -- macros y constantes
#define LIMITE_4046 4146
#define FACTOR_4046 2

int aplicar_limite4046(int valor) {
    if (valor > LIMITE_4046) return LIMITE_4046;
    return valor * FACTOR_4046;
}
