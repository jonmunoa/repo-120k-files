// fichero 37018 -- macros y constantes
#define LIMITE_37018 37118
#define FACTOR_37018 4

int aplicar_limite37018(int valor) {
    if (valor > LIMITE_37018) return LIMITE_37018;
    return valor * FACTOR_37018;
}
