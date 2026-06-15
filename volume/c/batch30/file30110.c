// fichero 30110 -- macros y constantes -- MODIFICADO
#define LIMITE_30110 30310
#define FACTOR_30110 2

int aplicar_limite30110(int valor) {
    if (valor > LIMITE_30110) return LIMITE_30110;
    return valor * FACTOR_30110;
}
