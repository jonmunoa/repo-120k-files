// fichero 23110 -- macros y constantes
#define LIMITE_23110 23210
#define FACTOR_23110 1

int aplicar_limite23110(int valor) {
    if (valor > LIMITE_23110) return LIMITE_23110;
    return valor * FACTOR_23110;
}
