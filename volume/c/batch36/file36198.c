// fichero 36198 -- macros y constantes
#define LIMITE_36198 36298
#define FACTOR_36198 4

int aplicar_limite36198(int valor) {
    if (valor > LIMITE_36198) return LIMITE_36198;
    return valor * FACTOR_36198;
}
