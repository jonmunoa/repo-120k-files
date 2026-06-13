// fichero 30038 -- macros y constantes
#define LIMITE_30038 30138
#define FACTOR_30038 4

int aplicar_limite30038(int valor) {
    if (valor > LIMITE_30038) return LIMITE_30038;
    return valor * FACTOR_30038;
}
