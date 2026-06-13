// fichero 39198 -- macros y constantes
#define LIMITE_39198 39298
#define FACTOR_39198 4

int aplicar_limite39198(int valor) {
    if (valor > LIMITE_39198) return LIMITE_39198;
    return valor * FACTOR_39198;
}
