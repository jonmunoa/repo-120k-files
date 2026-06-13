// fichero 24610 -- macros y constantes
#define LIMITE_24610 24710
#define FACTOR_24610 1

int aplicar_limite24610(int valor) {
    if (valor > LIMITE_24610) return LIMITE_24610;
    return valor * FACTOR_24610;
}
