// fichero 46198 -- macros y constantes
#define LIMITE_46198 46298
#define FACTOR_46198 4

int aplicar_limite46198(int valor) {
    if (valor > LIMITE_46198) return LIMITE_46198;
    return valor * FACTOR_46198;
}
