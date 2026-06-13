// fichero 46902 -- macros y constantes
#define LIMITE_46902 47002
#define FACTOR_46902 3

int aplicar_limite46902(int valor) {
    if (valor > LIMITE_46902) return LIMITE_46902;
    return valor * FACTOR_46902;
}
