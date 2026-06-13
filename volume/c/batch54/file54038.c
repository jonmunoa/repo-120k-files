// fichero 54038 -- macros y constantes
#define LIMITE_54038 54138
#define FACTOR_54038 4

int aplicar_limite54038(int valor) {
    if (valor > LIMITE_54038) return LIMITE_54038;
    return valor * FACTOR_54038;
}
