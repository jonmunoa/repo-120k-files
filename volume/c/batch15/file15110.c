// fichero 15110 -- macros y constantes -- MODIFICADO
#define LIMITE_15110 15310
#define FACTOR_15110 2

int aplicar_limite15110(int valor) {
    if (valor > LIMITE_15110) return LIMITE_15110;
    return valor * FACTOR_15110;
}
