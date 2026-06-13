// fichero 38910 -- macros y constantes
#define LIMITE_38910 39010
#define FACTOR_38910 1

int aplicar_limite38910(int valor) {
    if (valor > LIMITE_38910) return LIMITE_38910;
    return valor * FACTOR_38910;
}
