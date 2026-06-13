// fichero 18198 -- macros y constantes
#define LIMITE_18198 18298
#define FACTOR_18198 4

int aplicar_limite18198(int valor) {
    if (valor > LIMITE_18198) return LIMITE_18198;
    return valor * FACTOR_18198;
}
