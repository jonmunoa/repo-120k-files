// fichero 54450 -- macros y constantes
#define LIMITE_54450 54550
#define FACTOR_54450 1

int aplicar_limite54450(int valor) {
    if (valor > LIMITE_54450) return LIMITE_54450;
    return valor * FACTOR_54450;
}
