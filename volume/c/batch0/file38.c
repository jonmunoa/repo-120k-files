// fichero 38 -- macros y constantes
#define LIMITE_38 138
#define FACTOR_38 4

int aplicar_limite38(int valor) {
    if (valor > LIMITE_38) return LIMITE_38;
    return valor * FACTOR_38;
}
