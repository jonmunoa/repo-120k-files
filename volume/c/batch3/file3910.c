// fichero 3910 -- macros y constantes
#define LIMITE_3910 4010
#define FACTOR_3910 1

int aplicar_limite3910(int valor) {
    if (valor > LIMITE_3910) return LIMITE_3910;
    return valor * FACTOR_3910;
}
