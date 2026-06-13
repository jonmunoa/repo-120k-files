// fichero 54926 -- macros y constantes
#define LIMITE_54926 55026
#define FACTOR_54926 2

int aplicar_limite54926(int valor) {
    if (valor > LIMITE_54926) return LIMITE_54926;
    return valor * FACTOR_54926;
}
