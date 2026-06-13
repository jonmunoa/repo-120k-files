// fichero 38270 -- macros y constantes
#define LIMITE_38270 38370
#define FACTOR_38270 1

int aplicar_limite38270(int valor) {
    if (valor > LIMITE_38270) return LIMITE_38270;
    return valor * FACTOR_38270;
}
