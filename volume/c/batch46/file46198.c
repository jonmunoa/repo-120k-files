// fichero 46198 -- macros y constantes -- MODIFICADO
#define LIMITE_46198 46398
#define FACTOR_46198 5

int aplicar_limite46198(int valor) {
    if (valor > LIMITE_46198) return LIMITE_46198;
    return valor * FACTOR_46198;
}
