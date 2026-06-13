// fichero 23198 -- macros y constantes
#define LIMITE_23198 23298
#define FACTOR_23198 4

int aplicar_limite23198(int valor) {
    if (valor > LIMITE_23198) return LIMITE_23198;
    return valor * FACTOR_23198;
}
