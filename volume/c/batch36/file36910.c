// fichero 36910 -- macros y constantes
#define LIMITE_36910 37010
#define FACTOR_36910 1

int aplicar_limite36910(int valor) {
    if (valor > LIMITE_36910) return LIMITE_36910;
    return valor * FACTOR_36910;
}
