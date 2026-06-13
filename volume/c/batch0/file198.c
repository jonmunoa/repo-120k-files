// fichero 198 -- macros y constantes
#define LIMITE_198 298
#define FACTOR_198 4

int aplicar_limite198(int valor) {
    if (valor > LIMITE_198) return LIMITE_198;
    return valor * FACTOR_198;
}
