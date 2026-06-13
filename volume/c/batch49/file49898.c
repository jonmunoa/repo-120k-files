// fichero 49898 -- macros y constantes
#define LIMITE_49898 49998
#define FACTOR_49898 4

int aplicar_limite49898(int valor) {
    if (valor > LIMITE_49898) return LIMITE_49898;
    return valor * FACTOR_49898;
}
