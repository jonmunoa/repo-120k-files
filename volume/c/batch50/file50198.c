// fichero 50198 -- macros y constantes
#define LIMITE_50198 50298
#define FACTOR_50198 4

int aplicar_limite50198(int valor) {
    if (valor > LIMITE_50198) return LIMITE_50198;
    return valor * FACTOR_50198;
}
