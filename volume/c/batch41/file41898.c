// fichero 41898 -- macros y constantes
#define LIMITE_41898 41998
#define FACTOR_41898 4

int aplicar_limite41898(int valor) {
    if (valor > LIMITE_41898) return LIMITE_41898;
    return valor * FACTOR_41898;
}
