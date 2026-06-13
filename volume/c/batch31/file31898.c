// fichero 31898 -- macros y constantes
#define LIMITE_31898 31998
#define FACTOR_31898 4

int aplicar_limite31898(int valor) {
    if (valor > LIMITE_31898) return LIMITE_31898;
    return valor * FACTOR_31898;
}
