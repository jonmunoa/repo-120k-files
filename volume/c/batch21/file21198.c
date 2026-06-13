// fichero 21198 -- macros y constantes
#define LIMITE_21198 21298
#define FACTOR_21198 4

int aplicar_limite21198(int valor) {
    if (valor > LIMITE_21198) return LIMITE_21198;
    return valor * FACTOR_21198;
}
