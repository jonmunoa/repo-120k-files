// fichero 39046 -- macros y constantes
#define LIMITE_39046 39146
#define FACTOR_39046 2

int aplicar_limite39046(int valor) {
    if (valor > LIMITE_39046) return LIMITE_39046;
    return valor * FACTOR_39046;
}
