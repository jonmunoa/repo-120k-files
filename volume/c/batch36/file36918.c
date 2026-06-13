// fichero 36918 -- macros y constantes
#define LIMITE_36918 37018
#define FACTOR_36918 4

int aplicar_limite36918(int valor) {
    if (valor > LIMITE_36918) return LIMITE_36918;
    return valor * FACTOR_36918;
}
