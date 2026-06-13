// fichero 46702 -- macros y constantes
#define LIMITE_46702 46802
#define FACTOR_46702 3

int aplicar_limite46702(int valor) {
    if (valor > LIMITE_46702) return LIMITE_46702;
    return valor * FACTOR_46702;
}
