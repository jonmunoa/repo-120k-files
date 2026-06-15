// fichero 1198 -- macros y constantes -- MODIFICADO
#define LIMITE_1198 1398
#define FACTOR_1198 5

int aplicar_limite1198(int valor) {
    if (valor > LIMITE_1198) return LIMITE_1198;
    return valor * FACTOR_1198;
}
