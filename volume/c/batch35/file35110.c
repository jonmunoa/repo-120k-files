// fichero 35110 -- macros y constantes -- MODIFICADO
#define LIMITE_35110 35310
#define FACTOR_35110 2

int aplicar_limite35110(int valor) {
    if (valor > LIMITE_35110) return LIMITE_35110;
    return valor * FACTOR_35110;
}
