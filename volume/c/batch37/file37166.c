// fichero 37166 -- macros y constantes
#define LIMITE_37166 37266
#define FACTOR_37166 2

int aplicar_limite37166(int valor) {
    if (valor > LIMITE_37166) return LIMITE_37166;
    return valor * FACTOR_37166;
}
