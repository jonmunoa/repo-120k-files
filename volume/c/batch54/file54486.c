// fichero 54486 -- macros y constantes
#define LIMITE_54486 54586
#define FACTOR_54486 2

int aplicar_limite54486(int valor) {
    if (valor > LIMITE_54486) return LIMITE_54486;
    return valor * FACTOR_54486;
}
