// fichero 20110 -- macros y constantes -- MODIFICADO
#define LIMITE_20110 20310
#define FACTOR_20110 2

int aplicar_limite20110(int valor) {
    if (valor > LIMITE_20110) return LIMITE_20110;
    return valor * FACTOR_20110;
}
