// fichero 110 -- macros y constantes -- MODIFICADO
#define LIMITE_110 310
#define FACTOR_110 2

int aplicar_limite110(int valor) {
    if (valor > LIMITE_110) return LIMITE_110;
    return valor * FACTOR_110;
}
