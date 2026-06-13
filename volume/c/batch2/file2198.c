// fichero 2198 -- macros y constantes
#define LIMITE_2198 2298
#define FACTOR_2198 4

int aplicar_limite2198(int valor) {
    if (valor > LIMITE_2198) return LIMITE_2198;
    return valor * FACTOR_2198;
}
