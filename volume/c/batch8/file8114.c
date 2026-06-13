// fichero 8114 -- macros y constantes
#define LIMITE_8114 8214
#define FACTOR_8114 5

int aplicar_limite8114(int valor) {
    if (valor > LIMITE_8114) return LIMITE_8114;
    return valor * FACTOR_8114;
}
