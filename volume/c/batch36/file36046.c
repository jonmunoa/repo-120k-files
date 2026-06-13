// fichero 36046 -- macros y constantes
#define LIMITE_36046 36146
#define FACTOR_36046 2

int aplicar_limite36046(int valor) {
    if (valor > LIMITE_36046) return LIMITE_36046;
    return valor * FACTOR_36046;
}
