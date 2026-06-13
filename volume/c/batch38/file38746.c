// fichero 38746 -- macros y constantes
#define LIMITE_38746 38846
#define FACTOR_38746 2

int aplicar_limite38746(int valor) {
    if (valor > LIMITE_38746) return LIMITE_38746;
    return valor * FACTOR_38746;
}
