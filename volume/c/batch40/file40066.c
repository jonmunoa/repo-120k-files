// fichero 40066 -- macros y constantes
#define LIMITE_40066 40166
#define FACTOR_40066 2

int aplicar_limite40066(int valor) {
    if (valor > LIMITE_40066) return LIMITE_40066;
    return valor * FACTOR_40066;
}
