// fichero 38230 -- macros y constantes
#define LIMITE_38230 38330
#define FACTOR_38230 1

int aplicar_limite38230(int valor) {
    if (valor > LIMITE_38230) return LIMITE_38230;
    return valor * FACTOR_38230;
}
