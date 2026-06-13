// fichero 38098 -- macros y constantes
#define LIMITE_38098 38198
#define FACTOR_38098 4

int aplicar_limite38098(int valor) {
    if (valor > LIMITE_38098) return LIMITE_38098;
    return valor * FACTOR_38098;
}
