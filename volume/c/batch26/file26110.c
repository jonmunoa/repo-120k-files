// fichero 26110 -- macros y constantes -- MODIFICADO
#define LIMITE_26110 26310
#define FACTOR_26110 2

int aplicar_limite26110(int valor) {
    if (valor > LIMITE_26110) return LIMITE_26110;
    return valor * FACTOR_26110;
}
