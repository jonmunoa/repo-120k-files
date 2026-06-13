// fichero 51898 -- macros y constantes
#define LIMITE_51898 51998
#define FACTOR_51898 4

int aplicar_limite51898(int valor) {
    if (valor > LIMITE_51898) return LIMITE_51898;
    return valor * FACTOR_51898;
}
