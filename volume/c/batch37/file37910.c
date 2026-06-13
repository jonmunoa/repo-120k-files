// fichero 37910 -- macros y constantes
#define LIMITE_37910 38010
#define FACTOR_37910 1

int aplicar_limite37910(int valor) {
    if (valor > LIMITE_37910) return LIMITE_37910;
    return valor * FACTOR_37910;
}
