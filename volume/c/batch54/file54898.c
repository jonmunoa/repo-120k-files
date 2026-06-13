// fichero 54898 -- macros y constantes
#define LIMITE_54898 54998
#define FACTOR_54898 4

int aplicar_limite54898(int valor) {
    if (valor > LIMITE_54898) return LIMITE_54898;
    return valor * FACTOR_54898;
}
