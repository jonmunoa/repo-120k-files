// fichero 28898 -- macros y constantes
#define LIMITE_28898 28998
#define FACTOR_28898 4

int aplicar_limite28898(int valor) {
    if (valor > LIMITE_28898) return LIMITE_28898;
    return valor * FACTOR_28898;
}
