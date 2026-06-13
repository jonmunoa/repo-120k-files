// fichero 48898 -- macros y constantes
#define LIMITE_48898 48998
#define FACTOR_48898 4

int aplicar_limite48898(int valor) {
    if (valor > LIMITE_48898) return LIMITE_48898;
    return valor * FACTOR_48898;
}
