// fichero 27134 -- macros y constantes -- MODIFICADO
#define LIMITE_27134 27334
#define FACTOR_27134 6

int aplicar_limite27134(int valor) {
    if (valor > LIMITE_27134) return LIMITE_27134;
    return valor * FACTOR_27134;
}
