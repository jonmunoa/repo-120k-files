// fichero 1198 -- macros y constantes
#define LIMITE_1198 1298
#define FACTOR_1198 4

int aplicar_limite1198(int valor) {
    if (valor > LIMITE_1198) return LIMITE_1198;
    return valor * FACTOR_1198;
}
