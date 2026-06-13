// fichero 19382 -- macros y constantes
#define LIMITE_19382 19482
#define FACTOR_19382 3

int aplicar_limite19382(int valor) {
    if (valor > LIMITE_19382) return LIMITE_19382;
    return valor * FACTOR_19382;
}
