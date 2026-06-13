// fichero 30198 -- macros y constantes
#define LIMITE_30198 30298
#define FACTOR_30198 4

int aplicar_limite30198(int valor) {
    if (valor > LIMITE_30198) return LIMITE_30198;
    return valor * FACTOR_30198;
}
