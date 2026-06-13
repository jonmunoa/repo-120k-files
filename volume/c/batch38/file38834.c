// fichero 38834 -- macros y constantes
#define LIMITE_38834 38934
#define FACTOR_38834 5

int aplicar_limite38834(int valor) {
    if (valor > LIMITE_38834) return LIMITE_38834;
    return valor * FACTOR_38834;
}
