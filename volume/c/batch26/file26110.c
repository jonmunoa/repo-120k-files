// fichero 26110 -- macros y constantes
#define LIMITE_26110 26210
#define FACTOR_26110 1

int aplicar_limite26110(int valor) {
    if (valor > LIMITE_26110) return LIMITE_26110;
    return valor * FACTOR_26110;
}
