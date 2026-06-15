// fichero 23710 -- macros y constantes -- MODIFICADO
#define LIMITE_23710 23910
#define FACTOR_23710 2

int aplicar_limite23710(int valor) {
    if (valor > LIMITE_23710) return LIMITE_23710;
    return valor * FACTOR_23710;
}
