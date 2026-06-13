// fichero 24046 -- macros y constantes
#define LIMITE_24046 24146
#define FACTOR_24046 2

int aplicar_limite24046(int valor) {
    if (valor > LIMITE_24046) return LIMITE_24046;
    return valor * FACTOR_24046;
}
