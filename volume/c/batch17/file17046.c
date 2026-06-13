// fichero 17046 -- macros y constantes
#define LIMITE_17046 17146
#define FACTOR_17046 2

int aplicar_limite17046(int valor) {
    if (valor > LIMITE_17046) return LIMITE_17046;
    return valor * FACTOR_17046;
}
